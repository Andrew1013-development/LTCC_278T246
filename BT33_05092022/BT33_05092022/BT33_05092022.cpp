#include <stdio.h>

void main() {
	int i = 5;
	int n;
	scanf_s("%d", &n);
	do {
		printf("\n i = %d", i);
		i++;
	} while (i < n);

	i = 5;
	while (i < n) {
		printf("\n i = %d", i);
		i++;
	}

	for (i = 5; i < n; i++) {
		printf("\n i = %d", i);
	}
}