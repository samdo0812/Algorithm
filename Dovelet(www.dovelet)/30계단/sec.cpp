#include <stdio.h> 

int main(void)
{
	int iSecond = 0;
	scanf("%d", &iSecond);
	if (iSecond > 10000000)
	{
		return -1;
	}

	int is = 0, im = 0, ih = 0, id = 0;
	while (iSecond > 0)
	{
		is++;
		iSecond--;
		if (is > 59)
		{
			is = 0;
			im++;
		}

		if (im > 59)
		{
			im = 0;
			ih++;
		}

		if (ih > 23)
		{
			ih = 0;
			id++;
		}
	}

	printf("%d %d %d %d", id, ih, im, is);
	return 0;
}