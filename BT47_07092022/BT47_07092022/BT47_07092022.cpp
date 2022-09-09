#include <stdio.h>

void main() {
	int sum = 0;
	int n;
	scanf_s("%d", &n);
	for (int i = 1; sum <= n; i++) {
		if (sum + i > n) {
			break;
		}
		else {
			sum += i;
		}
	}
	printf("%d", sum);
}