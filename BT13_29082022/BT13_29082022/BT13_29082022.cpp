#include <stdio.h>

void main() {
	int a, b, c;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	if (a > b) {
		if (a > c) {
			printf("a la lon nhat");
		}
		else {
			printf("c la lon nhat");
		}
	}
	else {
		if (b > c) {
			printf("b la lon nhat");
		}
		else {
			printf("c la lon nhat");
		}
	}
}	