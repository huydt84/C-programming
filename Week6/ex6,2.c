# include <stdio.h>

int main() {
	double degree;
	printf("Enter the heading in degrees: ");
	scanf("%lf", &degree);
	if (degree < 0 || degree > 360)
		printf("Error");
	else if (degree < 90)
		printf("North %.2lf east", degree);
	else if (degree < 180)
		printf("south %.2lf east", degree);
	else if (degree < 270)
		printf("South %.2lf west", degree);
	else
		printf("North %.2lf west", degree);
	return 0;
}
