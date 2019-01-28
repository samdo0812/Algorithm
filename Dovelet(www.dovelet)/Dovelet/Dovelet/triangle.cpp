#include <stdio.h>

int main() {
	int b, h;
	float area;

	scanf("%d %d", &b, &h);

	area = (h * b) / 2.0;
	printf("%.2f\n" , area);

}