# include <stdio.h>

int checkSymmetric(int arr[][10], int n) {
	int i, j;
	for (i=0; i<n; i++) {
		for (j=0; j<n; j++) {
			if (arr[i][j] != arr[j][i]) {
				return 0;
			}
		}
	}
	return 1;
}

void main() {
	int i, j, n;
	int a[10][10];
	printf("Nhap kich co ma tran: ");
	scanf("%d", &n);
	for (i=0; i<n; i++) {
		for (j=0; j<n; j++) {
			printf("Nhap a[%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	if (checkSymmetric(a, n)) printf("Day la ma tran doi xung");
	else printf("Day khong phai ma tran doi xung");
}
