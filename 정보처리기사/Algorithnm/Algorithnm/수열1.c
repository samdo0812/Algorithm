#include <stdio.h>

//1+2+3+ ~ + 100 
int main() {
	int i, j;

	i = 0, j = 0;

	do {
		i++;
		j += i;
	} while (i < 100);
	
	printf("%d %d\n", i ,j );
}