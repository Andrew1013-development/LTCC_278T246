#include <stdio.h>

void main() {
	int n = 0;
	scanf_s("%d", &n);
	if (n % 2 == 0) {
		printf("%d la so chan", n);
	}
	else {
		printf("%d la so le", n);
	}
}