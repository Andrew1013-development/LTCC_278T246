#include <stdio.h>

void main() {
	int sum = 0;
	int n;
	do {
		scanf_s("%d", &n);
		if (n == 0) {
			break;
		}
		sum += n;
		printf("tong : %d\n", sum);
	} while (n != 0);
}