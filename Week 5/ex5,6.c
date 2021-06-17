# include <stdio.h>

void main() {
	int n, k;
	printf("Enter number of students: ");
	scanf("%d", &n);
	
	k = n%7;
	printf("Number of students in smallest class: %d\n", n/7);
	printf("Number of students in the largest class: %d\n", k ? n/7+1 : n/7);
	printf("Average number of students per class: %.2f\n", n/7.0);
	printf("Number of classes of above average size: %d\n", k);
    printf("Number of classes of at most average size: %d\n", 7-k);
    printf("Number of students in classes of larger than average size: %d\n", k * ((n + 6) / 7));
    printf("Number of classes of exactly average size: %d", k ? 0 : 7);
}
