#include <stdio.h>

void main() {
	//input
	int day, month, year;
	short day_passed = 0;
	bool leap_year = false;
	scanf_s("%d/%d/%d", &day, &month, &year);
	
	// part a
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		leap_year = true;
	}
	
	if (month == 1) {
		day_passed += day;
	}
	else {
		for (int curr = 1; curr <= month; curr++) {
			if (curr == 1 || curr == 3 || curr == 5 || curr == 7 || curr == 8 || curr == 10 || curr == 12) {
				day_passed += 31;
			}
			else {
				if (curr == 4 || curr == 6 || curr == 9 || curr == 11) {
					day_passed += 30;
				}
				else {
					if (leap_year) {
						day_passed += 29;
					}
					else {
						day_passed += 28;
					}
				}
			}
		}
		day_passed += day;
	}
	printf("ngay thu %d trong nam", day_passed);
	
	// part b
	short date = (day + 2 * month + (3 * (month + 1) / 5) + year + (year / 4) - (year / 100) + (year / 400) + 2) % 7;
	switch (date) {
		case 0:
			printf("\nthu bay");
			break;
		case 1:
			printf("\nchu nhat");
			break;
		case 2:
			printf("\nthu hai");
			break;
		case 3:
			printf("\nthu ba");
			break;
		case 4:
			printf("\nthu tu");
			break;
		case 5:
			printf("\nthu nam");
			break;
		case 6:
			printf("\nthu sau");
			break;
	}
}