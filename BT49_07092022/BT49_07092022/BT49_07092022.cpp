#include <stdio.h>

void main() {
	for (int n = 2; n <= 9; n++) {
		for (int i = 0; i <= 10; i++) {
			printf("%d x %d = %d\n", n, i, n * i);
		}
		printf("\n");
	}
}