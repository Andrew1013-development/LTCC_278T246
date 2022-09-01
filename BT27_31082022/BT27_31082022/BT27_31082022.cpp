#include <stdio.h>

void main() {
	int day, month, year;
	short month_lim;
	scanf_s("%d/%d/%d", &day, &month, &year);

	if (1 <= day && day <= 31) {
		if (0 <= year && year <= 2022) {
			if (1 <= month && month <= 12) {
				if (month == 1 || month == 3 or month == 5 || month == 7 || month == 8 or month == 10 || month == 12) {
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

				if (day <= month_lim) {
					printf("ngay hop le");
				}
				else {
					printf("ngay khong hop le");
				}
			}
			else {
				printf("ngay khong hop le");
			}
		}
		else {
			printf("ngay khong hop le");
		}
	}
	else {
		printf("ngay khong hop le");
	}
	
	

	




	

	
}