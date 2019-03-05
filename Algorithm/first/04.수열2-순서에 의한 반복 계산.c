#include <stdio.h>

//1-2+3-4+5-6 ~ -98+99
int main() {
	int i = 0, j = 0;
	while (1)
	{
		i++;
		j += i;
		if (i>=99)
		{
			printf("%d", j);
			break;
		}
		else
		{
			i++;
			j -= i;
		}
	}
}