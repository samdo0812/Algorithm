#include <stdio.h>

//�Ҽ� : 1���� ũ�� 1�� �ڱ� �ڽŸ��� ����� ������ ��
int main() {
	int A, i, j;

	scanf("%d", &A);
	i = A-1;
	j = 2;

	while (1)
	{
		if (j <= i)
		{
			if (A % j == 0)
			{
				printf("�Ҽ� �ƴ�");
				break;
			}
			else
			{
				j++;
			}
		}
		else
		{
			printf("�Ҽ�");
			break;
		}
	}
}