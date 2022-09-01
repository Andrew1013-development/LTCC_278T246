#include <stdio.h>

void main() {
	char c;
	scanf_s("%c", &c);
	if (c >= 'a' && c <= 'z') {
		printf("chu hoa cua %c la %c", c, c-32);
	}
	else {
		printf("ma ASCII cua %c la %d", c, c);
	}
}