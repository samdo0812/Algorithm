#include <stdio.h>
/*
	한번 반복 할 때 마다 집합의 크기가 1 줄어듦
	10 + 9 + 8 + 7 + ... + 1
	=> N * (N+1) /2
	=>O(N*N)
	=>O(N^2)
	실제 수행시간은 선택 정렬보다 더 느림
*/

int main() {

	int array[10] = {1,10,5,8,7,6,4,3,2,9};
	int temp;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 9 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d " , array[i]);
	}
}