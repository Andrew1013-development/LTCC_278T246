#include <stdio.h>
#include <math.h>

void sochinhphuong1(int n) {
	int sqrt_n = sqrt((double)n);
	if ((int)pow(sqrt_n, 2) == n) {
		printf("\n%d la so chinh phuong", n);
	}
	else {
		printf("\n%d khong phai la so chinh phuong", n);
	}
}

bool sochinhphuong2(int n) {
	int sqrt_n = sqrt((double)n);
	if ((int)pow(sqrt_n, 2) == n) {
		return true;	
	}
	else {
		return false;
	}
}

void main() {
	int n;
	scanf_s("%d", &n);
	sochinhphuong1(n);
	bool result = sochinhphuong2(n);
	if (result) {
		printf("\n%d : la so chinh phuong", n);
	}
	else {
		printf("\n%d : khong phai la so chinh phuong", n);
	}
}