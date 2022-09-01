#include <stdio.h>

void main() {
	int day, month, year;
	short month_lim;
	scanf_s("%d/%d/%d", &day, &month, &year);
	short month2 = month - 1;
	if (month2 == 0) {
		month2 = 12;
	}
	if (month2 == 1 || month2 == 3 || month2 == 5 || month2 == 7 || month2 == 8 || month2 == 10 || month2 == 12) {
		month_lim = 31;
	}
	else {
		if (month2 == 4 || month2 == 6 || month2 == 9 || month2 == 1) {
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

	day -= 1;
	if (day == 0) {
		day = month_lim;
		month -= 1;
	}
	if (month < 1) {
		month = 12;
		year -= 1;
	}

	printf("truoc 1 ngay la %d/%d/%d", day, month, year);
}