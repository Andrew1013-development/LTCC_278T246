#include <stdio.h>

void main() {
	short n;
	do {
		scanf_s("%hu", &n);
		if (n >= 0 && n <= 255) {
			printf("ky tu ascii theo ma: %c\n", n);
		}
		else {
			break;
		}	
	} while (n >= 0 && n <= 255);
}