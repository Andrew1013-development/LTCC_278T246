#include <stdio.h>

void main() {
	char c;
	scanf_s("%c", &c);
	if ((int)c >= 65 && (int)c <= 90) {
		printf("la chu hoa\n");
		printf("ma ascii : %d; vi tri tren ban chu cai : %d", c, c - 64);
	}
	else {
		if ((int)c >= 97 && (int)c <= 122) {
			printf("la chu thuong\n");
			printf("ma ascii : %d; vi tri tren ban chu cai : %d", c, c - 96);
		}
		else {
			printf("khong phai chu cai");
		}
	}
}