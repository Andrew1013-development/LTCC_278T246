#include <stdio.h>
void integer1tonum(int num) {
	for (int i = 1; i <= num; i++) {
		printf("\n%d", i);
	}
}

void main() {
	int n;
	scanf_s("%d", &n);
	integer1tonum(n);
}