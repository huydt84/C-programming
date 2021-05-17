# include <stdio.h>
# include <math.h>

float f(float x, float n) {
	return x*x - n;
}

float df(float x) {
	return 2*x;
}


int main() {
	float n, can2; 
	int dem = 0; 
	printf("Nhap n: ");
	scanf("%f", &n);
	can2 = 2;
	printf("%f\n", can2);
	while(f(can2, n) >= 0.001 || f(can2, n) <= -0.001 || dem <= 20) {
		can2 -= f(can2, n) / df(can2);
		printf("%f\n", can2); 
		dem++;
	}
	return 0;
}


