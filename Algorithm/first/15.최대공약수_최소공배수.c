#include <stdio.h>

int main() {
	int a, b;
	int big = 0, small = 0;
	int mok, nmg, gcm, lcm;

	scanf("%d %d", &a, &b);

	if (a > b)
	{
		big = a;
		small = b;
	}
	else
	{
		big = b;
		small = a;
	}

	while (1)
	{
		mok = big / small;
		nmg = big - (mok * small);

		if (nmg == 0)
		{
			gcm = small;
			lcm = (a * b) / gcm;
			printf("%d %d" , gcm, lcm);
			break;
		}
		big = small;
		small = nmg;
	}
}