#include <stdio.h> 

int main() {
	int hour, mint, sec;
	int input;

	scanf("%d %d %d\n", &hour, &mint, &sec);
	scanf("%d", &input);

	hour = hour + input / 3600;
	mint = mint + (input % 3600 / 60);
	sec = sec + (input % 3600 % 60);
	mint = mint + (sec / 60);
	hour = hour + (mint / 60);
	sec = sec - ((sec / 60) * 60);
	mint = mint - ((mint / 60) * 60);
	hour = hour % 24;
	
	printf("%d %d %d", hour, mint, sec);
}