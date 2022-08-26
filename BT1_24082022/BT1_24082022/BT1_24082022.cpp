#include <stdio.h>

void main() {
	int a = 10;
	int b = 2;
	double thuong = a / b;
	printf("tong cua a va b : %d", a + b);
	printf("\ntich cua a va b : %d", a * b);
	printf("\nhieu cua a va b la : %d", a - b);
	printf("\nthuong cua a va b la : %0.1f", thuong);
	printf("\nphan chia du cua a va b la : %d", a % b);
}