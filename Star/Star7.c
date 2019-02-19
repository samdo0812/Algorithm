#include <stdio.h>
/*

*********
 *******
  *****
   ***
	*
   ***
  *****
 *******
*********

*/


int main(){
	
	int i, j, k, p;
	k = 9;
	p = -1;

	for (i = 0; i < 9; i++) 
	{
		if (i <= 4) 
		{
			k--;
			p++;
		}
		else 
		{
			k++;
			p--;
		}
		for (j = 0; j < 9; j++) 
		{
			if ((p <= j) && (j <= k)) 
			{
				printf("*");
			}
			else 
			{
				printf(" ");
			}

		}
		printf("\n");
	}
}

