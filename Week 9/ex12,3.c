# include <stdio.h>
# include <math.h>

int sumCube(int n) {
	int sum = 0;
	int i;
	for (i=1; i<=n; i++) {
		sum += pow(i, 3);
	}
	return sum;
}

void listSubmultiples(int n) {
	int i;
	int k = 0;
	int a[100];
	for (i=1; i<=n; i++) {
		if (n%i==0) {
			a[k] = i;
			k++;
		}  
	}
	for(i=1; i<k; i++) {
		printf("%d ", a[i]);
	}
}

void listPS(int n) {
	int i;
	for (i=1; i<=n; i++) {
		printf("%d ", i*i);
	}
}

void main() {
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	printf("Sum of the cube of integers from 1 to %d  is %d\n", n, sumCube(n));
	printf("All submutiples of the integer %d: ", n);
	listSubmultiples(n);
	printf("\nThe %d first perfect square numbers: ", n);
	listPS(n);
}

