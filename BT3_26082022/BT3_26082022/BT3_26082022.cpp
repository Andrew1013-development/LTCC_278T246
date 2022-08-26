#include <stdio.h>
#include <math.h>
#include <string.h>

void main() { 
	char num[4];
	short current;
	short reversed_num = 0;
	short count = 0;
	scanf("%s",&num);
	for (int i = 0; i < 4-1; ++i) {
		reversed_num += ((short)num[i] - 48) * pow(10,count);
		count += 1;
	}
	printf("inverted num : %d", reversed_num);
}