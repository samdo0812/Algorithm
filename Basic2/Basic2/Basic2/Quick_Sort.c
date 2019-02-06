#include <stdio.h>
/*
1 2 3 4 5 6 7 8 9 10
N ^ 2 = 10 * 10 = 100

vs

Quick Sort
1 2 3 4 5  = > 5 * 5 = 25
6 7 8 9 10 => 5 * 5 = 25 
= > 50


퀵 정렬의 평균 시간 복잡도 = > O(N * logN)
최악의 시간 복잡도는 O(N ^ 2)
*/

int number = 10;
int data[10] = {1,10,5,8,7,6,4,3,2,9};

void quickSort(int *data, int start, int end) {
	if (start >= end) //원소가 1개인 경우
	{
		return;
	}

	int key = start; //키는 첫번째 원소 (피봇)
	int i = start + 1;
	int j = end;
	int temp;

	while (i<=j)	//엇갈릴 때까지 반복
	{
		while (data[i] <= data[key])	//키 값보다 큰 값을 만날 때 까지
		{
			i++;
		}
		while (data[j] >= data[key] && j > start)	//키 값보다 작은 값을 만날 때 까지
		{
			j--;
		}
		if (i > j)	//현재 엇갈린 상태면 키 값과 교체
		{
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		}
		else
		{
			temp = data[j];
			data[j] = data[i];
			data[i] = temp;
		}
	}

	quickSort(data, start, j - 1);
	quickSort(data, j + 1, end);

}

int main() {
	quickSort(data, 0, number - 1);
	for (int i = 0; i < number; i++)
	{
		printf("%d " , data[i]);
	}
}