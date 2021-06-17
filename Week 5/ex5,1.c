# include <stdio.h>

void main() {
	float k;
	printf("Enter kilometers: ");
	scanf("%f", &k);
	printf("Convert to miles: %.2f miles", k/1.6);
}
