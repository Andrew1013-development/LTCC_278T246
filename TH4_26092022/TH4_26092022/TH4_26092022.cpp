#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct SinhVien {
	int ma;
	int stt;
	char ten[100];
	char truong[100];
	float dtb;
};

void main() {
	SinhVien sv;
	scanf_s("%d", &sv.ma);
	scanf_s("%d", &sv.stt);
	rewind(stdin);
	gets_s(sv.ten);
	rewind(stdin);
	gets_s(sv.truong);
	scanf_s("%f", &sv.dtb);
	printf("ma : %d\n", sv.ma);
	printf("stt : %d\n", sv.stt);
	printf("ten : %s\n", sv.ten);
	printf("truong : %s\n", sv.truong);
	printf("dtb : %0.2f\n", sv.dtb);
}