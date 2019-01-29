#include <stdio.h>

int main() {
	
	int time = 0;
	int day, hour, min, sec;

	scanf("%d" , &time);

	day = time / 86400;
	hour = (time % 86400) / 1440;
	min = ((time % 86400) % 1440) / 60;
	sec = ((time % 86400) % 1440) % 60;

	printf("%d %d %d %d", day, hour, min, sec);
	
}