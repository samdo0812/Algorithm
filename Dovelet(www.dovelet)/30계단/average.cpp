#include <stdio.h>

int main() {
	int a, b, c, d;
	float average;

	scanf("%d %d %d %d", &a,&b,&c,&d);
	average = (float)(a + b + c + d) / 4.0;

	printf("%.2f" , average);

}