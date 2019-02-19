#include <stdio.h>
/*

*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

*/


int main(){
	
	for (int i = 1, n = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			printf(((j >= n + 1) && (j <= 10 - n)) ? " " : "*");
		}
		if (i < 5)
		{
			n++;
		}
		else
		{
			n--;
		}
		printf("\n");
	}
	
}

