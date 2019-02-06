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

void show(){
	int i;
	for (i = 0; i < number; i++)
	{
		printf("%d ", data[i]);
	}
}

void quickSort(int *data, int start, int end) {
	if (start >= end)	//���Ұ� 1���� ��� �״�� �α�
	{
		return;
	}

	int key = start;	//Ű�� ù��° ����
	int i = start + 1, j = end, temp;

	while (i <= j)	//������ ������ �ݺ�
	{
		while (i<=end && data[i] <= data[key])	//Ű ������ ū ���� ���� �� ����
		{
			i++;
		}
		while (j> start && data[j] >= data[key]) //Ű ������ ���� ���� ���� ��
		{
			j--;
		}

		if (i>j)	//���� ������ ���¸� Ű ���� ��ü
		{
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		}
		else	//�������� �ʾҴٸ� i�� j�� ��ü
		{
			temp = data[i];
			data[i] = data[j];
			data[j] = temp;
		}
	}

	quickSort(data, start, j - 1);
	quickSort(data, j + 1, end);
}

int main() {
	quickSort(data, 0, number - 1);
	show();
}
