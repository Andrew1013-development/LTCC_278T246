#include <stdio.h>

void main() {
	int n;
	scanf_s("%d", &n);
	int i = n;
	do {
		printf("\n i = %d", i);
		i--;
	} while (i >= 1);

	i = 5;
	while (i >= 1) {
		printf("\n i = %d", i);
		i--;
	}

	for (i = n; i >= 1; i--) {
		printf("\n i = %d", i);
	}
}