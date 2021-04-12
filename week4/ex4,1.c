#include <stdio.h>

int main() {
	int a;
	float b;
	printf("An integer: ");
	scanf("%d", &a);
	printf("A floating point number: ");
	scanf("%f", &b);
	printf("The integer is %d, and the floating point number is %f", a, b);
	return 0;
}
