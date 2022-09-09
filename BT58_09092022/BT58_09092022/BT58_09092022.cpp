#include <stdio.h>
void sum1(int a, int b) {
	printf("tong cua a va b nhan 2 la : %d", (a + b) * 2);
}

int sum2(int a, int b) {
	return (a + b) * 2;
}
void main() {
	int a, b;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	sum1(a, b);
	int total = sum2(a, b);
	printf("\ntong cua a va b nhan 2 la %d", total);
}