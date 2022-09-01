#include <stdio.h>

void main() {
	int sec, min, hour;
	short carry = 0;
	scanf_s("%d:%d:%d", &hour, &min, &sec);
	sec += 1;
	if (sec == 60) {
		sec = 00;
		carry += 1;
	}
	min += carry;
	
	if (min > 59) {
		min = 00;
	}
	else {
		carry = 0;
	}

	if (carry == 1) {
		hour += 1;
	}

	printf("gio moi : %02d:%02d:%02d", hour, min, sec);
	
}