#include <stdio.h>

void main() {
	int hour, min, sec;
	short carry = 0;
	scanf_s("%d:%d:%d", &hour, &min, &sec);
	sec -= 1;
	if (sec < 0) {
		sec = 59;
		carry += 1;
	}
	min -= carry;
	if (min < 0) {
		min = 59;
		hour -= 1;
	}
	if (hour < 0) {
		hour = 23;
	}
	printf("gio moi : %02d:%02d:%02d", hour, min, sec);
}