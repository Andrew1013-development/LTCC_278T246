#include <stdio.h>

void main() {
	const double G = 6.67E-11;
	double r, m1, m2;

	scanf("%lf", &r);
	scanf("%lf", &m1);
	scanf("%lf", &m2);
	double F = G * (m1 * m2) / r * r;
	printf("F = %lf", F);
}