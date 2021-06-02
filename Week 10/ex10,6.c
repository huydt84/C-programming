# include <stdio.h>

void inputMatrix(int arr[][10], int row, int col) {
	int i, j;
	for (i=0; i<row; i++) {
		for (j=0; j<col; j++) {
			printf("Nhap array[%d][%d]: ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
}

void outputMatrix(int arr[][10], int row, int col) {
	int i, j;
	for (i=0; i<row; i++) {
		for (j=0; j<col; j++) {
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
}

int main() {
	int i, j, k;
	int a[10][10]; int b[10][10]; int c[10][10];
	
	printf("Nhap mang A:\n");
	inputMatrix(a, 3, 3);
	printf("Nhap mang B:\n");
	inputMatrix(b, 3, 3);

	for (i = 0; i < 3; ++i) {
      	for (j = 0; j < 3; ++j) {
         	c[i][j] = 0;
      }
   }


   for (i = 0; i < 3; ++i) {
      	for (j = 0; j < 3; ++j) {
         	for (k = 0; k < 3; ++k) {
            	c[i][j] += a[i][k] * b[k][j];
        }
      }
   }
   
   printf("\nMang A:\n");
   outputMatrix(a, 3, 3);
   printf("\nMang B:\n");
   outputMatrix(b, 3, 3);
   printf("\nMang C = A * B:\n");
   outputMatrix(c, 3, 3);
}
