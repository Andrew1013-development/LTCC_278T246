#include <stdio.h>

void main() {
	int day, month, year;
	short month_lim;
	scanf_s("%d/%d/%d", &day, &month, &year);
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
		month_lim = 31;
	}
	else {
		if (month == 4 || month == 6 || month == 9 || month == 1) {
			month_lim = 30;
		}
		else {
			if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
				month_lim = 29;
			}
			else {
				month_lim = 28;
			}
		}
	}

	day += 1;
	if (day > month_lim) {
		day = 1;
		month += 1;
	}
	if (month > 12) {
		month = 1;
		year += 1;
	}

	printf("sau 1 ngay la %d/%d/%d", day, month, year);
}