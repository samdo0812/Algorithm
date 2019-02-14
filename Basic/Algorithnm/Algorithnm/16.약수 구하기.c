#include <stdio.h>

int main() {
	
	int b, mok, nmg;
	int a[100];
	int c = 0, d = -1;

	scanf("%d" , &b);

	while (1)
	{
		c++;
		if (c<=b)
		{
			mok = b / c;
			nmg = b - (mok * c);
			if (nmg == 0)
			{
				d++;
				a[d] = c;
			}
		}
		else
		{
			printf("%d " , b);

			for (int i = 0; i <= d; i++)
			{
				printf("%d " , a[i]);
			}
			
			break;
		}
	}
}