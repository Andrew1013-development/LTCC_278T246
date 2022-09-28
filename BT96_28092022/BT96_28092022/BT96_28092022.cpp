#include <stdio.h>
#include <string.h>
#include <math.h>
#define size 25

void swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void nhap_mang(int array[size][size], int count) {
	printf("nhap mang\n");
	for (int i = 0; i < count; i++) {
		for (int j = 0; j < count; j++) {
			printf("nhap a[%d][%d] = ", i, j);
			scanf_s("%d", &array[i][j]);
		}
	}
	printf("\n");
}

void xuat_mang(int array[size][size], int count) {
	printf("\nxuat mang");
	for (int i = 0; i < count; i++) {
		for (int j = 0; j < count; j++) {
			printf("\na[%d][%d] = %d", i, j, array[i][j]);
		}
	}
	printf("\n");
}

void in_duongcheophu_nguyento(int array[size][size], int count) {
	printf("\nin duong cheo phu");
	for (int i = 0; i < count; i++) {
		int curr = array[i][count - i - 1];
		int divider_count = 0;
		for (int j = 1; j <= curr; j++) {
			if (curr % j) {
				divider_count += 1;
			}

			if (divider_count > 2) {
				break;
			}
		}
		if (divider_count == 2) {
			printf("%d\n", curr);
		}
	}
	printf("\n");
}

void in_mang_solonthu2(int array[size][size], int count) {
	printf("in so lon thu 2 trong mang\n");
	int largest1 = -99;
	int largest2 = -99;
	for (int i = 0; i < count; i++) {
		for (int j = 0; j < count; j++) {
			if (array[i][j] > largest1) {
				largest2 = largest1;
				largest1 = array[i][j];
			}
		}
	}
	printf("so lon thu 2 : %d\n", largest2);
	printf("\n");
}

void in_mang_tong2chuso(int array[size][size], int count) {
	printf("in so lon thu 2 trong mang\n");
	for (int i = 0; i < count; i++) {
		for (int j = 0; j < count; j++) {
			int curr = array[i][j];
			int sum = 0;
			while (curr > 0)
			{
				int m = curr % 10;
				sum = sum + m;
				curr = curr / 10;
			}
			printf("tong cac chu so cua %d la : %d\n", array[i][j], sum);
		}
	}
	printf("\n");
}

void in_bien(int array[size][size], int count) {
	printf("\nin bien");
	int sum = 0;
	for (int i = 0; i < count; i++) {
		if (i == 0 || i == count - 1) {
			for (int j = 0; j < count; j++) {
				printf("\na[%d][%d] = %d", i, j, array[i][j]);
				sum += array[i][j];
			}
		}
		else {
			printf("\na[%d][0] = %d", i, array[i][0]);
			sum += array[i][0];
			printf("\na[%d][%d] = %d", i, count - 1, array[i][count - 1]);
			sum += array[i][count - 1];
		}
	}
	printf("\ntong cac phan tu bien = %d", sum);
	printf("\n");
}

void sapxep_mang_cotchan(int array[size][size], int count) {
	for (int i = 0; i < count; i += 2) {
		for (int e = 0; e < count; e++) {
			for (int j = 0; j < count - e - 1; j += 1) {
				if (array[i][j] > array[i][j + 1]) {
					swap(&array[i][j], &array[i][j + 1]);
				}
			}
		}
	}
}

void main() {
	int n;
	scanf_s("%d", &n);
	int a[size][size];
	nhap_mang(a, n);
	xuat_mang(a, n);
	in_duongcheophu_nguyento(a, n);
	in_mang_solonthu2(a, n);
	in_mang_tong2chuso(a, n);
	in_bien(a, n);
	sapxep_mang_cotchan(a, n);
	xuat_mang(a, n);
}