#include <stdio.h>

//1+3+5+7+ ~ + 99
int main() {
	int i, j;
	i = -1, j = 0;

	do
	{
		i += 2;
		j += i;
	} while (i<99);

	printf("%d", j);
}