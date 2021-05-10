# include <stdio.h>
# include <math.h>

int perfect(k) {
	int i, j=0;
	for (i = 1; i <= k/2; i++) {
		if (k % i == 0) {
			j += i;
		}
	}
	if (j == k) {
		return 1;
	}
		return 0;
}

int main() {
	int m, n;
	printf("Nhap so n: ");
	scanf("%d", &n);
	for (m = 1; m < n; m++) {
		if (perfect(m) == 1) {
			printf("%d ", m);
		}	
	}
	return 0;
}
