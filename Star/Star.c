#include <stdio.h>

/*

	 *
	 **
	 ***
	 ****
	 *****

*/


int main() {
	
	for (int a = 0; a < 5; a++) 
	{
		for (int b = 0; b < a; b++)
		{
			printf("*");
		}
		printf("\n");
	}
}