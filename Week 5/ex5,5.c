# include <stdio.h>

void main() {
	double x, y;
	printf("Enter x: ");
	scanf("%lf", &x);
	printf("Enter y: ");
	scanf("%lf", &y);
	if (x < y) printf("x is smaller than y");
	else if (x > y)	printf("x is higher than y");
	else printf("x is equal to y");
}
