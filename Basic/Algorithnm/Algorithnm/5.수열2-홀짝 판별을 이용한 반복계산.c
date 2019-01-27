#include <stdio.h>

//(-1)x2x(-3)x4x(-5)x ~ x100
int main() {
	int i; 
	double j;

	i = 0;
	j = 1;

	do
	{
		i++;
		if (i % 2 == 0)
		{
			j *= i;
		}
		else
		{
			j *= i * (-1);
		}
	} while (i < 100);

	printf("%11.4e", j);
}