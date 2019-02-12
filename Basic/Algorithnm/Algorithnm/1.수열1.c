#include <stdio.h>

//1+2+3+ ~ + 10
int main() {
	int A = 0, hap = 0;
	int k = 2;	//소수인지 판별할 숫자를 2부터 시작
	int j;

	scanf("%d" , &A);

	while (1)
	{
		j = 2;
		while (k%j != 0)
		{
			j++;
			if (k==j)
			{
				hap += k;
			}
			if (k<A)
			{
				hap += k;
			}
			else
			{
				printf("%d " , hap);
				break;
			}
		}
	}

} 