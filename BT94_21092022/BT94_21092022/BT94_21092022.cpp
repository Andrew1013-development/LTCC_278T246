#include <stdio.h>
#define size 25

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

void in_duongcheochinh(int array[size][size], int count) {
	printf("\nin duong cheo chinh");
	for (int i = 0; i < count; i++) {
		printf("\na[%d][%d] = %d", i, i, array[i][i]);
	}
	printf("\n");
}

void in_duongcheophu(int array[size][size], int count) {
	printf("\nin duong cheo phu");
	for (int i = 0; i < count; i++) {
		printf("\na[%d][%d] = %d", i, count-i-1, array[i][count-i-1]);
	}
	printf("\n");
}

void in_tamgiactren_chinh(int array[size][size], int count) {
	printf("\nin tam giac tren duong chinh");
	for (int i = 0; i < count; i++) {
		for (int j = i; j < count; j++) {
			printf("\na[%d][%d] = %d", i, j, array[i][j]);
		}
	}
	printf("\n");
}

void in_tamgiacduoi_chinh(int array[size][size], int count) {
	printf("\nin tam giac duoi duong chinh");
	for (int i = 0; i < count; i++) {
		for (int j = 0; j <= i; j++) {
			printf("\na[%d][%d] = %d", i, j, array[i][j]);
		}
	}
	printf("\n");
}

void in_tamgiactren_phu(int array[size][size], int count) {
	printf("\nin tam giac tren duong phu");
	for (int i = 0; i < count; i++) {
		for (int j = 0; j < count - i; j++) {
			printf("\na[%d][%d] = %d", i, j, array[i][j]);
		}
	}
	printf("\n");
}

void in_tamgiacduoi_phu(int array[size][size], int count) {
	printf("\nin tam giac duoi duong phu");
	for (int i = 0; i < count; i++) {
		for (int j = count - i - 1; j < count; j++) {
			printf("\na[%d][%d] = %d", i, j, array[i][j]);
		}
	}
	printf("\n");
}

void in_bien(int array[size][size], int count) {
	printf("\nin bien");
	for (int i = 0; i < count; i++) {
		if (i == 0 || i == count - 1) {
			for (int j = 0; j < count; j++) {
				printf("\na[%d][%d] = %d", i, j, array[i][j]);
			}
		}
		else {
			printf("\na[%d][0] = %d", i, array[i][0]);
			printf("\na[%d][%d] = %d", i, count - 1, array[i][count - 1]);
		}
	}
	printf("\n");
}

void in_toado(int array[size][size], int x) {
	printf("\nin toa do (x = %d)", x);
	for (int i = 0; i < x; i++) {
		printf("\na[%d][%d] = %d", x - 1, i, array[x - 1][i]);
	}
	printf("\n");
}

void in_zigzag(int array[size][size], int count) {
	printf("\nin zigzag");
	for (int i = 0; i < count; i++) {
		for (int j = i; j < i + 2; j++) {
			if (i == count - 1 && j == i + 1) {
				break;
			}
			printf("\na[%d][%d] = %d", i, j, array[i][j]);
		}
	}
	printf("\n");
}

void in_yenngua(int array[size][size], int count) {
	printf("\nin yen ngua");
	int largest = 0;
	int largest_row = 0;
	for (int i = 0; i < count; i++) {
		for (int j = 0; j < count; j++) {
			if (array[i][j] > largest) {
				largest = array[i][j];
				largest_row = i;
			}
		}
	}

	for (int i = 0; i < count; i++) {
		if (array[largest_row][i] < largest) {
			printf("\nkhong co phan tu yen nhua");
			break;
		}
		else {
			printf("\nphan tu yen ngua la %d", largest);
		}
	}
	printf("\n");
}

void in_hoanghau(int array[size][size], int count) {
	printf("\nin hoang hau");
	// code goes here
	printf("\n");
}

void in_cucdai(int array[size][size], int count) {
	printf("\nin cuc dai");
	// code goes here
	printf("\n");
}

void main() {
	int a[size][size];
	int count,x;
	printf("nhap so phan tu = ");
	scanf_s("%d", &count);
	printf("nhap toa do x (in toa do) = ");
	scanf_s("%d", &x);
	nhap_mang(a, count);
	xuat_mang(a, count);
	in_duongcheochinh(a, count);
	in_duongcheophu(a, count);
	in_tamgiactren_chinh(a, count);
	in_tamgiacduoi_chinh(a, count);
	in_tamgiactren_phu(a, count);
	in_tamgiacduoi_phu(a, count);
	in_bien(a, count);
	in_toado(a, x);
	in_zigzag(a, count);
	in_yenngua(a, count);

}