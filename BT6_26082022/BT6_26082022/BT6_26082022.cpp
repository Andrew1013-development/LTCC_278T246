#include <stdio.h>
#include <math.h>

void main() {
	double n, x;
	scanf("%lf", &n);
	scanf("%lf", &x);
	printf("result : %lf", pow(x * x + 1, n));
}