#include <stdio.h> 

void main() {
	int n;
	scanf_s("%d", &n);
	if (n % 2 == 0) {
		printf("n*2 la %d", n * 2);
	}
	else {
		printf("n la %d", n);
	}
}