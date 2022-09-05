#include <stdio.h>

void main() {
	int i = 1;
	int n;
	scanf_s("%d", &n);
	do {
		printf("\n i = %d", i);
		i++;
	} while (i < n);

	i = 1;
	while (i < n) {
		printf("\n i = %d", i);
		i++;
	}

	for (i = 1; i < n; i++) {
		printf("\n i = %d", i);
	}
}