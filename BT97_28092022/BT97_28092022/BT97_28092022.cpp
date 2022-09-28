#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define size 25

struct NgayThang {
	int NgaySinh;
	int ThangSinh;
	int NamSinh;
};

struct NhanVien {
	int MaNhanVien;
	char TenNhanVien[50];
	NgayThang NgaySinh;
	//NgayThang NamSinh; // struct NgayThang
	int GioiTinh; // Nam = 1, Nu = 0
	float Luong; // 10 = 10T
};

void nhap_nhanvien(NhanVien &nv) {
	printf("nhap ma nhan vien : ");
	scanf_s("%d", &nv.MaNhanVien);
	rewind(stdin);
	printf("nhap ten nhan vien : ");
	fgets(nv.TenNhanVien, 50, stdin);
	rewind(stdin);
	printf("nhap ngay sinh nhan vien : ");
	scanf_s("%d", &nv.NgaySinh); 
	printf("nhap thang sinh nhan vien : ");
	scanf_s("%d", &nv.ThangSinh);
	printf("nhap nam sinh nhan vien : ");
	scanf_s("%d", &nv.NamSinh);
	printf("nhap gioi tinh (1 = nam, 0 = nu) : ");
	scanf_s("%d", &nv.GioiTinh);
	printf("nhap luong : ");
	scanf_s("%f", &nv.Luong);
}

void xuat_nhanvien(NhanVien& nv) {
	printf("\n");
	printf("ma nhan vien = %d\n", nv.MaNhanVien);
	printf("ten nhan vien = %s", nv.TenNhanVien);
	printf("ngay sinh nhan vien = %d/%d/%d\n",nv.NgaySinh, nv.ThangSinh, nv.NamSinh);
	if (nv.GioiTinh == 1) {
		printf("gioi tinh nhan viet = nam\n");
	}
	else {
		printf("gioi tinh nhan viet = nu\n");
	}
	printf("luong nhan vien = %0.5f\n", nv.Luong);
	
}

void nhaparray_nhanvien(NhanVien nv[size], int count) {

	for (int i = 0; i < count; i++) {
		printf("nhap thong tin cho nv[%d]", i);
		nhap_nhanvien(nv[i]);
	}
}

void xuatarray_nhanvien(NhanVien nv[size], int count) {
	for (int i = 0; i < count; i++) {
		printf("thong tin cho nv[%d]\n", i);		
		xuat_nhanvien(nv[i]);
	}
}

void xuat_nhanvien_tuoitren25(NhanVien nv[size], int count) {
	for (int i = 0; i < count; i++) {
		if (abs(nv[i].NamSinh - 2022) > 25) {
			printf("thong tin cho nv[%d]\n", i);
			xuat_nhanvien(nv[i]);
		}
		
	}
}

void xuat_nhanvien_nam_luongtren10t(NhanVien nv[size], int count) {
	for (int i = 0; i < count; i++) {
		if (nv[i].GioiTinh == 1) {
			if (nv[i].Luong > 10) {
				printf("thong tin cho nv[%d]\n", i);
				xuat_nhanvien(nv[i]);
			}
		}
	}
}

void sapxep_nhanvien_luong_giamdan(NhanVien nv[size], int count) {
	for (int i = 0; i < count - 1; i++) {
		for (int j = 0; j < count - i - 1; j++) {
			if (nv[i].Luong < nv[i + 1].Luong) {
				NhanVien temp = nv[i];
				nv[i] = nv[i + 1];
				nv[i + 1] = temp;
			}
		}
	}
}

void sapxep_nhanvien_sinhnhat_tangdan(NhanVien nv[size], int count) {
	for (int i = 0; i < count - 1; i++) {
		for (int j = 0; j < count - i - 1; j++) {
			if (nv[i].NamSinh > nv[i+1].NamSinh) {
				NhanVien temp = nv[i];
				nv[i] = nv[i + 1];
				nv[i + 1] = temp;
			}
			else {
				if (nv[i].ThangSinh > nv[i + 1].ThangSinh) {
					NhanVien temp = nv[i];
					nv[i] = nv[i + 1];
					nv[i + 1] = temp;
				}
				else {
					if (nv[i].NgaySinh > nv[i + 1].NgaySinh) {
						NhanVien temp = nv[i];
						nv[i] = nv[i + 1];
						nv[i + 1] = temp;
					}
				}
			}
		}
	}
}

void in_nhanvien_sinhnhattrongthang(NhanVien nv[size], int count) {
	for (int i = 0; i < count - 1; i++) {
		if (nv[i].ThangSinh == 8) {
			xuat_nhanvien(nv[i]);
		}
	}
}


void main() {
	NhanVien nv[size];
	int count;
	scanf_s("%d", &count);
	nhaparray_nhanvien(nv, count);
	xuatarray_nhanvien(nv, count);
	xuat_nhanvien_tuoitren25(nv, count);
	xuat_nhanvien_nam_luongtren10t(nv, count);
	sapxep_nhanvien_luong_giamdan(nv, count);
	xuatarray_nhanvien(nv, count);
	sapxep_nhanvien_sinhnhat_tangdan(nv, count);
	xuatarray_nhanvien(nv, count);
}