#include <stdio.h>

void odd(int n) {
	int a[100];
	int num;
	int count = 0;
	do {
		scanf_s("%d", &num);
		if (num % 2 == 1) {
			a[count] = num;
			count += 1;
		}
		else {
			printf("day khong phai la so le\n");
		}
	} while (count < n);

	for (int i = 0; i < n; i++) {
		printf("a[%d] = %d\n", i, a[i]);
	}
}

void prime(int n) {
	int a[100];
	int num;
	int count1 = 0;
	int count2 = 0;
	do {
		scanf_s("%d", &num);
		if (num <= 1) {
			continue;
		}
		else {
			for (int e = 1; e <= num; e++) {
				if (num % e == 0) {
					count1 += 1;
				}
				if (count1 > 2) {
					printf("day khong phai la so nguyen to\n");
					break;
				}
			}
		}

		if (count1 == 2) {
			a[count2] = num;
			count2 += 1;
			count1 = 0;
		}
	} while (count2 < n);

	for (int i = 0; i < n; i++) {
		printf("a[%d] = %d\n", i, a[i]);
	}
}

void inc(int n) {
	int a[100];
	int num;
	int count = 0;
	int prev_num = 0;
	do {
		scanf_s("%d", &num);
		if (num > prev_num) {
			a[count] = num;
			count += 1;
			prev_num = num;
		}
		else {
			printf("day khong phai so hop le\n");
		}
	} while (count < n);

	for (int i = 0; i < n; i++) {
		printf("a[%d] = %d\n", i, a[i]);
	}
}

void range(int n) {
	int a[100];
	int num;
	int count = 0;
	do {
		scanf_s("%d", &num);
		if (50 <= num && num <= 100) {
			a[count] = num;
			count += 1;
		}
		else {
			printf("day khong phai so trong tam 50-100\n");
		}
	} while (count < n);

	for (int i = 0; i < n; i++) {
		printf("a[%d] = %d\n", i, a[i]);
	}
}

void swap(int n) {
	int a[100];
	int num;
	int count = 0;
	do {
		scanf_s("%d", &num);
		if (num % 2 != count % 2) {
			a[count] = num;
			count += 1;
		}
		else {
			printf("so khong hop le\n");
		}
	} while (count < n);

	for (int i = 0; i < n; i++) {
		printf("a[%d] = %d\n", i, a[i]);
	}
}
void main() {
	int n;
	scanf_s("%d", &n);
	printf("only odd values\n");
	odd(n);
	printf("only prime values\n");
	prime(n);
	printf("increasing\n");
	inc(n); 
	printf("numbers between 50-100\n");
	range(n);
	printf("odd -> even, even -> odd\n");
	swap(n);
}