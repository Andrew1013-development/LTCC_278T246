#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 83

struct SinhVien {
	int code;
	int number;
	char name[size];
	int birth_year;
	char school[size];
	float score;
};
 
//bt 1 + 3
void nhap_sinhvien(SinhVien &sv, int curr) {
	printf("code = ");
	scanf_s("%d", &sv.code);
	//printf("number = ");
	//scanf_s("%d", &sv.number);
	sv.number = curr;
	rewind(stdin);
	printf("name = ");
	fgets(sv.name, size, stdin);
	rewind(stdin);
	printf("birth year = ");
	scanf_s("%d", &sv.birth_year);
	rewind(stdin);
	printf("school = ");
	fgets(sv.school, size, stdin);
	rewind(stdin);
	printf("score = ");
	scanf_s("%f", &sv.score);
	printf("\n");
}

//bt 1
void xuat_sinhvien(SinhVien &sv) {
	printf("code = %d\n", sv.code);
	printf("number = %d\n", sv.number);
	printf("name = %s", sv.name);
	printf("year of birth = %d\n", sv.birth_year);
	printf("school = %s", sv.school);
	printf("score = %0.2f\n", sv.score);
	printf("\n");
}

//bt 2
void nhaparray_sinhvien(SinhVien sv[size], int count) {
	for (int i = 1; i <= count; i++) {
		printf("nhap thong tin cua hoc sinh so [%d]\n", i);
		nhap_sinhvien(sv[i], i);
	}
}

//bt 2 + 4
void xuatarray_sinhvien(SinhVien sv[size], int count) {
	for (int i = 1; i <= count; i++) {
		printf("thong tin cua hoc sinh so [%d]\n", i);
		if (sv[i].score >= 8) {
			xuat_sinhvien(sv[i]);
		}
		if (sv[i].birth_year <= 2002) {
			xuat_sinhvien(sv[i]);
		}
		
	}
}

//bt 6 : all (no surprises) -> not doing it
void main() {
	SinhVien sv[size];
	int count;
	scanf_s("%d", &count);
	//nhap_sinhvien(sv);
	//xuat_sinhvien(sv);

	nhaparray_sinhvien(sv, count);
	xuatarray_sinhvien(sv, count);
}