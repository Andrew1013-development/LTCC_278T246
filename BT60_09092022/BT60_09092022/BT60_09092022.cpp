#include <stdio.h>
void sohoanthien1(int num) {
	int sum = 0;
	for (int i = 1; i < num; i++) {
		if (num % i == 0) {
			sum += i;
		}
	}
	if (sum == num) {
		printf("\n%d la so hoan hao", num);
	}
	else {
		printf("\n%d khong phai la so hoan hao", num);
	}
}

bool sohoanthien2(int num) {
	int sum = 0;
	for (int i = 1; i < num; i++) {
		if (num % i == 0) {
			sum += i;
		}
	}
	if (sum == num) {
		return true;
	}
	else {
		return false;
	}
}
void main() {
	int n;
	scanf_s("%d", &n);
	sohoanthien1(n);
	bool result = sohoanthien2(n);
	if (result == true) {
		printf("\n%d : la so hoan hao", n);
	}
	else {
		printf("\n%d : khong phai la so hoan hao", n);
	}
}