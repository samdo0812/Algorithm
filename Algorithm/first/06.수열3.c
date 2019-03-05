#include <stdio.h>

// -(1/2)+(2/3)-(3/4)+(4/5)- ~ -(99/100)
int main() {
	float i, j;
	i = 0, j = 0;

	do
	{
		i += 1;
		
		if ((int) (i / 2 ) == i / 2)		
		{
			j += i / (i + 1);
		}
		else
		{
			j -= i / (i + 1);
		}
	} while (i<99);

	printf("%f", j);
}