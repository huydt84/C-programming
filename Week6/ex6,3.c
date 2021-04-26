# include <stdio.h>

int main() {
	int age;
	printf("Nhap tuoi: ");
	scanf("%d", &age);
	if (age < 0)
		printf("Error");
	else if (age < 18)
		printf("Child");
	else if (age < 65)
		printf("Adult");
	else
		printf("Senior citizen");
	return 0;
}
