#include <stdio.h>

int main() {
	int price = 1000;
	int change = 0;
	int w100 , w50 , w10;

	scanf("%d" , &change);

	w100 = (price - change) / 100;
	w50 = (price - change) % 100 / 50;
	w10 = (price - change) % 100 % 50 /10;

	printf("%d %d %d ", w100, w50, w10);
}