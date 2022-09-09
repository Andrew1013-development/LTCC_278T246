#include <stdio.h>

void main() {
	int n, m;
	scanf_s("%d", &n);
	scanf_s("%d", &m);
	for (int j = n; j <= m; j++) {
		for (int i = 0; i <= 10; i++) {
			printf("%d x %d = %d\n", j, i, j * i);
		}
		printf("\n");
	}
}