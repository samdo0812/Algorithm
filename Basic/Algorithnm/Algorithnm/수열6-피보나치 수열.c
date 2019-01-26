#include <stdio.h>

int main() {
	
	int sum, cnt, c;
	int a = 1, b = 1;

	sum = 2;
	cnt = 2;

	while (1)
	{
		c = a + b;
		sum += c;
		cnt++;
		if (cnt < 20)
		{
			a = b;
			b = c;
		}
		else
		{
			printf("%d", sum);
			break;
		}
		
	}
}