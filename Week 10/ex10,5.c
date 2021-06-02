# include <stdio.h>

int count(int a[], int n, int k) {
	int i;
	int c = 0;
	for (i=0; i<n; i++) {
		if (a[i]==k) c++;
	}
	return c;
}

int conseZero(int a[], int n, int k) {
	if (k==n-1) return 1;
	if (a[k+1] != 0) return 1;
	k += 1;
	return 1 + conseZero(a, n, k);
}

void main() {
	int i, n;
	int a[100];
	int dem = 0;
	int chuoi = 0;
	
	printf("Nhap so phan tu cua day: ");
	scanf("%d", &n);
	for (i=0; i<n; i++) {
		printf("\nNhap a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	
	printf("So phan tu 0: %d\n", count(a, n, 0));
	
	for (i=0; i<n; i++) {
		if (a[i]==0 && chuoi < conseZero(a, n, i)) {
			chuoi = conseZero(a, n, i);
		}
	}
	printf("So phan tu cua day so 0 dai nhat: %d", chuoi);
}
