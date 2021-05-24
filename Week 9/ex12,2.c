# include <stdio.h>
# include <math.h>

int is_prime(int n) {
	if (n<=1) return 0;
	if (n==2) return 1;
	if (n==3) return 1;
	int i, k;
	k = sqrt(n);
	for (i=2; i<=k; i++) {
		if (n%i==0) {
			return 0;
		} 
	}
	return 1;
}

void main() {
	int n, i;
	printf("Nhap n: ");
	scanf("%d", &n);
	printf("Cac so nguyen to nho hon n: ");
	for (i=1; i<=n; i++) {
		if(is_prime(i) == 1) {
			printf("%d ", i);
		}
	} 
}
