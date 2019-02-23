#include <stdio.h>

int main()
{
	int a = 0, b = 0;
	int c = 0, d = 0, e = 0;
	int result = 0;

	scanf("%d\n %d", &a, &b);

	c = a * (b % 10);
	d = a * (b % 100 / 10);
	e = a * (b / 100);
	result = a * b;

	printf("%d\n%d\n%d\n%d\n", c, d, e, result);

}