#include <stdio.h>
/*
	�ѹ� �ݺ� �� �� ���� ������ ũ�Ⱑ 1 �پ��
	10 + 9 + 8 + 7 + ... + 1
	=> N * (N+1) /2
	=>O(N*N)
	=>O(N^2)
	���� ����ð��� ���� ���ĺ��� �� ����
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