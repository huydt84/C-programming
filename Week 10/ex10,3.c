# include <stdio.h>

int compare(int a[], int n1, int b[], int n2) {
	if (n1 != n2) return 0;
	int i;
	for (i=0; i<n1; i++) {
		if (a[i] != b[i]) {
			return 0;
		}
	}
	return 1;	
}

void main() {
	int k, i, n1, n2;
	int a[n1];
	int b[n2];
	
	printf("Nhap so phan tu cua mang 1: ");
	scanf("%d", &n1);
	printf("Nhap mang:\n");
	for (i=0; i<n1; i++) {
		scanf("%d", &a[i]);
	}
	
	printf("Nhap so phan tu cua mang 2: ");
	scanf("%d", &n2);
	printf("Nhap mang:\n");
	for (i=0; i<n2; i++) {
		scanf("%d", &b[i]);
	}
	
	if (compare(a, n1, b, n2) == 0) {
		printf("2 mang nay khac nhau");
	}
	else {
		printf("2 mang nay giong nhau");
	}
}
