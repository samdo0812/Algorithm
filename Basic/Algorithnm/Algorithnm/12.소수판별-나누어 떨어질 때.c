#include <stdio.h>

int main() {
	int a ,j;
	scanf("%d",&a);

	j = 2;

	while (a % j != 0)
	
		j++;

		if (a == j)
		{
			printf("�Ҽ�");
		}
		else
		{
			printf("�Ҽ� �ƴ�");
		}
	
}