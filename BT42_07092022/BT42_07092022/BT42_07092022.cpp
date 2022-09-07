#include <stdio.h>

void main() {
	int n;
	scanf_s("%d", &n);
	for (int i = 1; i < n; i++) {
		printf("\n%d", i);
	}
}