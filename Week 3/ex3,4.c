# include <stdio.h>

void main() {
	int m, n, i; 
	int sum=0;
	
	printf("Enter first number: ");
	scanf("%d", &m);
	printf("Enter second number: ");
	scanf("%d", &n);
	
	printf("Sum %d", m);
	sum += m;
	for (i=m+1; i<=n; i++) {
		printf("+%d", i);
		sum += i;
	}
	printf(" = %d", sum);
}
