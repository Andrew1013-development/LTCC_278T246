#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main() {
	
	int n;
	bool invaild = false;
	do {
		scanf_s("%d", &n);
		
		// condition 1
		if (n > 0) {
			invaild = false;
			int i = 0;
			while (i < n) {
				printf("%d\n", i);
				i += 2;
			}
		}
		else {
			invaild = true;
		}
		
		// condition 2
		if (n >= 0 && n <= 9) {
			invaild = false;
			switch (n) {
			case 1:
				printf("mot\n");
				break;
			case 2:
				printf("hai\n");
				break;
			case 3:
				printf("ba\n");
				break;
			case 4:
				printf("bon\n");
				break;
			case 5:
				printf("nam\n");
				break;
			case 6:
				printf("sau\n");
				break;
			case 7:
				printf("bay\n");
				break;
			case 8:
				printf("tam\n");
				break;
			case 9:
				printf("chin\n");
				break;
			}
		}
		else {
			invaild = true;
		}

		// condition 3
		if (n < 10 || n > 50) {
			invaild = false;
			for (int count = 1; count <= n; count++) {
				srand(time(NULL));
				int r = rand();
				printf("so random : %d\n", r);
			}
		}
		else {
			invaild = true;
		}

		// condition 4
		if (n % 5 == 0) {
			invaild = false;
			printf("bang cuu chuong 5\n:");
			for (int count = 1; count <= 10; count++) {
				printf("%d x %d = %d\n", 5, count, 5 * count);
			}
		}
		else {
			invaild = true;
		}
	} while (invaild != false);
}