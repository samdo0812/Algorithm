#include <stdio.h>

//소수 : 1보다 크며 1과 자기 자신만을 약수로 가지는 수
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
				printf("소수 아님");
				break;
			}
			else
			{
				j++;
			}
		}
		else
		{
			printf("소수");
			break;
		}
	}
}