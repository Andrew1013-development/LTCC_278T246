#include <stdio.h>

void main() {
	int x, y;
	scanf_s("%d", &x);
	scanf_s("%d", &y);
	printf("tong cua x va y la %d", x + y);
	printf("\nhieu cua x va y la %d", x - y);
	printf("\ntich cua x va y la %d", x * y);
	float thuong = x / y;
	printf("\nthuong cua x va y la %0.2f", thuong);
}