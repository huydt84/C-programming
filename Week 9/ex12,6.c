# include <stdio.h>

double celsius(double f) {
	return (f - 32) * 5 / 9;
}

void main() {
	double i;
	for (i=0; i<=20; i++) {
		printf("%.0lf\t%.2lf\n", i, celsius(i));
	}  
}
