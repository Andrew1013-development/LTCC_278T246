#include <stdio.h>

void prime_check1(int num) {
	int count = 0;
	if (num <= 1) {
		printf("\n%d khong phai la so nguyen to", num);
	}
	else {
		for (int i = 1; i <= num; i++) {
			if (num % i == 0) {
				count += 1;
			}
			if (count > 2) {
				printf("\n%d khong phai la so nguyen to", num);
				break;
			}			
		}
	}
	if (count == 2) {
		printf("\n%d la so nguyen to", num);
	}
}


bool prime_check2(int num) {
	int count = 0;
	if (num <= 1) {
		return false;
	}
	else {
		for (int i = 1; i <= num; i++) {
			if (num % i == 0) {
				count += 1;
			}
			if (count > 2) {
				return false;
				break;
			}

		}
	}
	if (count == 2) {
		return true;
	}
}

void main() {
	int a;
	scanf_s("%d", &a);
	prime_check1(a);
	bool result = prime_check2(a);
	if (result == true) {
		printf("\n%d : la so nguyen to", a);
	}
	else {
		printf("\n%d : khong phai la so nguyen to", a);
	}
}