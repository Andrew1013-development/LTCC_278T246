#include <stdio.h>

void main() {
	int money;
	int to50, to20, to10, to5, to1;
	int du50, du20, du10, du5, du1;
	scanf("%d", &money);

	to50 = money / 50;
	du50 = money % 50;
	to20 = du50 / 20;
	du20 = du50 % 20;
	to10 = du20 / 10;
	du10 = du20 % 10;
	to5 = du10 / 5;
	du5 = du10 % 5;
	to1 = du5 / 1;
	du1 = du5 % 1;

	printf("to50 : %d", to50);
	printf("\nto20 : %d", to20);
	printf("\nto10 : %d", to10);
	printf("\nto5 : %d", to5);
	printf("\nto1 : %d", to1);
}