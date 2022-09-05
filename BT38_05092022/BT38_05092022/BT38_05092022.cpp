#include <stdio.h>

void main() {
	int sum = 0;
	int i = 1;
	int n;
	scanf_s("%d", &n);
	do {
		if (i % 2 == 1) {
			sum += i;
		}
		i++;
	} while (i <= n);
	printf("sum = %d", sum);

	sum = 0;
	i = 1;
	while (i <= n) {
		if (i % 2 == 1) {
			sum += i;
		}
		i++;
	}

	sum = 0;
	for (i = 1; i <= n; i++) {
		if (i % 2 == 1) {
			sum += i;
		}
	}
}