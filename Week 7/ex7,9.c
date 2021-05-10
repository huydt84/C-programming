# include <stdio.h>

void main() {
	int i, n; 
	unsigned long long factorial = 1;
	printf("Nhap n: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		factorial *= i;
	}
	printf("%d", factorial);
}
