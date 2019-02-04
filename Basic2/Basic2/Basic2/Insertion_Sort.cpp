#include <stdio.h>

/*
10 + 9 + 8 + ... + 1
	= > N * (N + 1) / 2
	= > N * N
	= > O(N*N)
	= > O(N^2)
	거의 정렬되어 있는 경우에는 굉장히 효율적
*/

int main() {
	int array[10] = { 1,10,5,8,7,6,4,3,2,9 };
	int j, temp;

	for (int i = 0; i < 9; i++)
	{
		j = i;
		while (j >=  0 && array[j] > array[j+1])
		{
			temp = array[j];
			array[j] = array[j + 1];
			array[j + 1] = temp;
			j--;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", array[i]);
	}
}