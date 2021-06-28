# include <stdio.h>

void fn(char *a, char *b) {
	int i = 0;
	while (a[i] != ' ') {
		b[i] = a[i];
		i++;
	}
}

void main() {
	char name[100], firstname[100]; 
	printf("Nhap ten: ");
	gets(name);
	fn(name, firstname);
	printf("Firstname: %s", firstname);
}
