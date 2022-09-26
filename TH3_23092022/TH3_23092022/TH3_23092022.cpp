#include <stdio.h>
#include <string.h>

void main() {
	const int size = 100;
	char string1[size], string2[size];
	fflush(stdin);
	scanf_s("%s", &string1, 100);
	scanf_s("%s", &string2, 100);
	printf("string1 = %s, string2 = %s", string1, string2);

	strcat_s(string1, string2);
}