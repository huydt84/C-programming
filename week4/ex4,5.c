#include <stdio.h>
#include <math.h>
#define PI 3.14

int main() {
	printf("Enter the radius: ");
	float ra, cir, area1, area2, volume;
	scanf("%f", &ra);
	cir = 2*PI*ra;
	area1 = PI*pow(ra, 2);
	area2 = PI*pow(ra, 2);
	volume = (4/3)*pow(ra, 3);
	printf("Circumference of the circle: %f\nArea of the circle: %f\n", cir, area1);
	printf("Area of the sphere: %f\nVolume of the sphere: %f\n", area2, volume);
	return 0;
}
