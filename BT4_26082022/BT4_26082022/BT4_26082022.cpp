#include <stdio.h>
#include <math.h>

void main() {
	char num[7];
	int reversed_num = 0;
	short count = 0;
	scanf("%s", &num);
	for (int i = 0; i < 6; ++i) {
		reversed_num += ((short)num[i] - 48) * pow(10, count);
		count += 1;
	}
	printf("inverted num : %d", reversed_num);
}