#include <stdio.h>

//�Ҽ��� ��
int main() {
	int A = 0, hap = 0;
	int k = 2;	//�Ҽ����� �Ǻ��� ���ڸ� 2���� ����
	int j;

	scanf("%d" , &A);

	while (1)
	{
		j = 2;
		while (k%j != 0)
		{
			j++;
		}
			
		if (k==j)
		{
			hap += k;
		}
		if (k<A)
		{
			k++;
		}
		else
		{
			printf("%d " , hap);
			break;
		}
	}

} 