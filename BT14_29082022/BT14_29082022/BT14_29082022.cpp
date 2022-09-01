#include <stdio.h>
#include <math.h>

void main() {
	long double a, b, c, d, e, f;
	scanf_s("%lf", &a);
	scanf_s("%lf", &b);
	scanf_s("%lf", &c);
	scanf_s("%lf", &d);
	scanf_s("%lf", &e);
	scanf_s("%lf", &f);
	long double x, y;
	long double g, gx, gy;
	g = a * e - b * d;
	gx = c * e - b * f;
	gy = a * f - d * c;

	if (g != 0) {
		x = gx / g;
		y = gy / g;

		printf("x = %lf", x);
		printf("\ny = %lf", y);
	}
	else {
		if (gx != 0 || gy != 0) {
			printf("phuong trinh vo nghiem");
		}
		else {
			printf("phuong trinh vo dinh");
		}
	}
}