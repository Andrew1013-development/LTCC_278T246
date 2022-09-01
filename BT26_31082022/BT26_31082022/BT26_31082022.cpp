#include <stdio.h> 

void main() {
	int hour1, min1, sec1;
	int hour2, min2, sec2;
	int hour_a, min_a, sec_a;
	short carry = 0;
	scanf_s("%d:%d:%d", &hour1, &min1, &sec1);
	scanf_s("%d:%d:%d", &hour2, &min2, &sec2);

	sec_a = sec1 + sec2;
	if (sec_a >= 60) {
		sec_a = sec_a - 60;
		carry = 1;
	}
	min_a = min1 + min2 + carry;
	if (min_a >= 60) {
		min_a = min_a - 60;
	}
	else {
		carry = 0;
	}
	hour_a = hour1 + hour2 + carry;
	if (hour_a >= 24) {
		hour_a = hour_a - 24;
	}

	printf("tong 2 gio la %02d:%02d:%02d", hour_a, min_a, sec_a);
}