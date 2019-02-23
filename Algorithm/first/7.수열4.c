#include <stdio.h>

//1+2+4+7+11+16+ ~ 로 증가하는 수열
int main() {

	int i, j, k;
	i = 0, j = 1, k = 1;

	do
	{
		i++;
		j += i;
		k += j;
	} while (i<19);

	printf("%d" , k);
}