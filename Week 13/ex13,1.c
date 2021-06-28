# include <stdio.h>

void main() {
	char a[50];
	gets(a);
	int i = 0;
	int count = 0;
	while(a[i] != '\0') {
		if (a[i] == ' ') count++;
		i++;
	}
	printf("So dau cach trong mang: %d", count);
}
