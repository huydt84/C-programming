#include <stdio.h>

int main() {
	int a, b, c;
	printf("Enter 3 numbers: ");
	scanf("%d %d %d", &a, &b, &c);
	if (a < b && a < c)
		printf("a = %d is the smallest number", a);
	else if (b < a && b < c)
		printf("b = %d is the smallest number", b);
	else if (c < a && c < b)
		printf("c = %d is the smallest number", c);
	else
		printf("No smallest number can be found!");
	return 0;
}
