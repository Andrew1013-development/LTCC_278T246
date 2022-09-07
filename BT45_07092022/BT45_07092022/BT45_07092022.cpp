#include <stdio.h>

void main() {
	int sum = 0;
	int n;
	scanf_s("%d", &n);
	for (int i = 2; i <= n; i++) {
		if (i % 15 == 0) {
			sum += i;
		}
		else {
			if (i % 3 == 2 && i % 5 == 3) {
				sum += i;
			}
		}
	}
	printf("tong : %d", sum);
}