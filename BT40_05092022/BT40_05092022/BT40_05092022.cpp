#include <stdio.h>

void main() {
	int sum = 0;
	int n;
	scanf_s("%d", &n);
	for (int i = 1; i <= (int)(n / 2); i++) {
		if (n % i == 0) {
			sum += i;
		}
	}

	if (sum == n) {
		printf("%d la so hoan hao", n);
	}
	else {
		printf("%d khong phai la so hoan hao", n);
	}
}