#include <stdio.h>

int main() {
	int temp;
	int count[6];
	int array[30] = {1,3,2,4,3,2,5,3,1,2,
					 3,4,4,3,5,1,2,3,5,2,
					 3,1,4,3,5,1,2,1,1,1,};

	//count �迭 �ʱ�ȭ
	for (int i = 0; i <= 5; i++)
	{
		count[i] = 0;
	}

	//count �迭�� ���� ��Ұ����� 0, array�� ��ҵ��� Ȯ�� �� count�� ��Ұ����� ++ ����
	for (int i = 0; i < 30; i++)
	{
		count[array[i]]++;
	}
	
	//���
	for (int i = 0; i <= 5; i++)
	{
		if (count[i] != 0)
		{
			for (int j = 0; j < count[i]; j++)
			{
				printf("%d",i);
			}
		}
	}
}