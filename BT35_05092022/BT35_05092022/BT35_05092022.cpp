#include <stdio.h>

void main() {
	int n;
	scanf_s("%d", &n);
	int i = n - 1;
	do {
		printf("\n i = %d", i);
		i--;
	} while (i > 5);

	i = n - 1;
	while (i > 5) {
		printf("\n i = %d", i);
		i--;
	}

	for (i = n - 1; i > 5; i--) {
		printf("\n i = %d", i);
	}
}