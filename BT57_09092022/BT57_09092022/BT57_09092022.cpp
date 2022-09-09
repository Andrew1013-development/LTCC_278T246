#include <stdio.h>

void sum1(int a, int b, int d) {
	printf("tong cua a,b,d la %d", a + b + d);
}

int sum2(int a, int b, int d) {
	return a + b + d;
}
void main() {
	int a, b, d;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &d);
	sum1(a, b, d);
	int total = sum2(a, b, d);
	printf("\ntong cua a,b,d la : %d", total);
}