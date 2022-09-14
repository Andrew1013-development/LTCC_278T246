#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main() {
	srand(time(NULL));
	int a[100];
	int random,num;
	int count = 0;
	printf("so phan tu? ");
	scanf_s("%d", &num);
	do {
		scanf_s("%d", &a[count]);
		count += 1;
	} while (count < num);

	count = 0;
	do {
		random = rand() % 69;
		a[count + 2] = random;
		count += 1;
	} while (count < num);

	for (int i = 0; i < num+2; i++) {
		printf("\na[%d] = %d", i, a[i]);
	}
}