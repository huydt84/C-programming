# include <stdio.h>

void sort(int a[], int n) {
	int i, j, temp;
	for (i=0; i<n-1; i++) {
		for (j=i+1; j<n; j++) {
			if (a[i] < a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

void sortOdd(int a[], int n) {
	int i, j, temp;
	for (i=0; i<n-1; i++) {
		for (j=i+1; j<n; j++) {
			if (a[i] < a[j] && a[i]%2==1 && a[j]%2==1) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

int main() {
	int i;
	int a[10];
	for (i=0; i<10; i++) {
		printf("Nhap a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	
	sortOdd(a, 10);
	printf("Sap xep so le:\n");
	for (i=0; i<10; i++) {
		printf("%d ", a[i]);
	}
	
	sort(a, 10);
	printf("\nSap xep mang:\n");
	for (i=0; i<10; i++) {
		printf("%d ", a[i]);
	}
}
