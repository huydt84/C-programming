# include <stdio.h>

double ke(double m, double v) {
	return m * v * v / 2;
}

void main() {
	double m, v;
	printf("Nhap khoi luong: ");
	scanf("%lf", &m);
	printf("Nhap van toc: ");
	scanf("%lf", &v);
	printf("Dong nang cua vat: %.2lf", ke(m, v));
}
