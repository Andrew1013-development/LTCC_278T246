#include <stdio.h>

void main() {
	int count = 0;
	int n;
	scanf_s("%d", &n);
	for (int i = 1; i < (int)(n / 2); i++) {
		if (n % 1 == 0) {
			count += 1;
		}
		if (count > 2) {
			printf("%d khong phai la so nguyen", n);
			break;
		}
	}
	if (count == 2) {
		printf("%d la so nguyen", n);
	}
	
}