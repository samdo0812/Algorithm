#include <stdio.h>

/*
	1 2 3 4 5 6 7 8 9 10
	10 + 9 + 8 + ... + 1
	=> 10 * (10 +1) /2 = 55
	=> N * (N +1) / 2
	=> N * N
	=> O(N*N) -> O(N^2)
*/

int main() {

	int i, j, min, index, temp;

	int array[10] = { 1,10,5,8,7,6,4,3,2,9 };

	for (i = 0; i < 10; i++)
	{
		min = 9999;
		for (j = i; j < 10; j++)
		{
			if (min > array[j])
			{
				min = array[j];
				index = j;
			}
		}
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d ", array[i]);
	}
}