#include <stdio.h>
#include <stdlib.h>
#include <time.h>
constexpr auto size = 35;

void nhap_array(int array[size][size], int count1, int count2) {
	for (int i = 0; i < count1; i++) {
		for (int j = 0; j < count2; j++) {
			printf("nhap a[%d][%d] : ", i, j);
			scanf_s("%d", &array[i][j]);
		}
	}
}

void xuat_array(int array[size][size], int count1, int count2) {
	for (int i = 0; i < count1; i++) {
		for (int j = 0; j < count2; j++) {
			printf("a[%d][%d] : %d\n", i, j, array[i][j]);
		}
	}
}

void tao_array(int array[size][size], int count1, int count2) {
	srand(time(NULL));
	for (int i = 0; i < count1; i++) {
		for (int j = 0; j < count2; j++) {
			array[i][j] = rand() % 300;
		}
	}
}
void main() {
	int count1, count2;
	int a[size][size];
	scanf_s("%d %d", &count1, &count2);
	nhap_array(a, count1, count2);
	xuat_array(a, count1, count2);
	int a2[size][size];
	tao_array(a2, count1, count2);
	xuat_array(a2, count1, count2);
}