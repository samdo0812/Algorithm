#include <stdio.h>
/*
1 2 3 4 5 6 7 8 9 10
N ^ 2 = 10 * 10 = 100

vs

Quick Sort
1 2 3 4 5  = > 5 * 5 = 25
6 7 8 9 10 => 5 * 5 = 25 
= > 50


�� ������ ��� �ð� ���⵵ = > O(N * logN)
�־��� �ð� ���⵵�� O(N ^ 2)
*/

int number = 10;
int data[10] = {1,10,5,8,7,6,4,3,2,9};

void quickSort(int *data, int start, int end) {
	if (start >= end) //���Ұ� 1���� ���
	{
		return;
	}

	int key = start; //Ű�� ù��° ���� (�Ǻ�)
	int i = start + 1;
	int j = end;
	int temp;

	while (i<=j)	//������ ������ �ݺ�
	{
		while (data[i] <= data[key])	//Ű ������ ū ���� ���� �� ����
		{
			i++;
		}
		while (data[j] >= data[key] && j > start)	//Ű ������ ���� ���� ���� �� ����
		{
			j--;
		}
		if (i > j)	//���� ������ ���¸� Ű ���� ��ü
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