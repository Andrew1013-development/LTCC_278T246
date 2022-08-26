#include <stdio.h>

void main() {
	int a, b;
	printf("nhap gia tri a: ");
	scanf("%d", &a);
	printf("nhap gia tri b: ");
	scanf("%d", &b);
	float thuong = a / b;
	printf("\ntong cua a va b la %d", a + b);
	printf("\nhieu cua a va b la %d", a - b);
	printf("\ntich cua a va b la %d", a * b);
	printf("\nthuong cua a va b la %0.1f", thuong);
	printf("\nphan du cua phep chia a va b la %d", a % b);
}