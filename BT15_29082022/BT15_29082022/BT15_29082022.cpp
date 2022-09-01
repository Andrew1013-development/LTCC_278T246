#include <stdio.h>

void main() {
	float a, b, x;
	scanf_s("%f", &a);
	scanf_s("%f", &b);

	x = b / a;
	printf("x = %0.2f", x);
}