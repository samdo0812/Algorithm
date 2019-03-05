#include <stdio.h>

// -1+2-4+7-11+16-22 ~ 20번째 항까지
int main() {
	int i, j, k, l;
	
	i = 0;
	j = 1;
	k = -1;
	l = -1;

	do
	{
		i++;
		j += i;
		l *= -1;
		k += j * l;

	} while (i<19);
	printf("%d" , k);
}