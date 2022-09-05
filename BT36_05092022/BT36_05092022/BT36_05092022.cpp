#include <stdio.h>

void main() {
	int n;
	scanf_s("%d", &n);
	int i = 1;
	do {
		if (i % 2 == 0) { printf("\n i = %d", i); }
		i++;
	} while (i <= n);

	i = 1;
	while (i <= n) {
		if (i % 2 == 0) { printf("\n i = %d", i); }
		i++;
	}

	for (i = 1; i <= n; i++) {
		if (i % 2 == 0) { printf("\n i = %d", i); }
	}
}