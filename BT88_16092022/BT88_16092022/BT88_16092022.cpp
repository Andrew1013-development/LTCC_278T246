#include <stdio.h>

void nhap_array(int array[], int count) {
	for (int i = 0; i < count; i++) {
		printf("nhap a[%d] = ", i);
		scanf_s("%d", &array[i]);
	}
}

void xuat_array(int array[], int count) {
	printf("\n");
	for (int i = 0; i < count; i++) {
		printf("a[%d] = %d\n", i, array[i]);
	}
}

int day_array(int array[], int count) {
	for (int i = count; i >= 0; i-=1) {
		printf("%d", i);
		array[i + 1] = array[i];
		array[i] = 0;
	}
	return count + 1;
}

void add_dauarray(int array[], int count) {
	printf("panh is here\n"); //indicator code only, no panh in code
	printf("nhap a[%d] = ", count);
	scanf_s("%d", &array[0]);
}

void main() {
	int count;
	int a[100];
	scanf_s("%d", &count);
	nhap_array(a, count);
	count = day_array(a, count);
	xuat_array(a, count);
	add_dauarray(a, count);
	xuat_array(a, count);
}