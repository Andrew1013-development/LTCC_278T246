#include <stdio.h>
#include <math.h>

void main() {
	int sqrt_n, n;
	scanf_s("%d", &n);
	sqrt_n = (int)sqrt((double)n);
	if (sqrt_n*sqrt_n == n) {
		printf("%d la so chinh phuong",n);
	}
	else {
		printf("%d khong phai la so chinh phuong", n);
	}
}