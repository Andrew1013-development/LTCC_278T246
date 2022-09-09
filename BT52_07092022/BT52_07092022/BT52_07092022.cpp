#include <stdio.h>

void main() {
	for (int i = 0; i <= 255; i+=8) {
		for (int j = 0; j <= 7; j++) {
			printf("ky tu : %c, so : %d ", i+j, i+j);
		}
		printf("\n");
	}
}