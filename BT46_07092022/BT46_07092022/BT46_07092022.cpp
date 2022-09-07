#include <stdio.h>
#include <math.h>

void main() {
	int n;
	scanf_s("%d", &n);
	for (int i = 0; pow(2, i) <= n; i++) {
		printf("%d\n", (int)pow(2, i));
	}
}