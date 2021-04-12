#include <stdio.h>

int main() {
	char chuoi1[100];
	char chuoi2[100];
	printf("String input by scan:\n");
	scanf("%s", chuoi1);
	printf("The string is: %s\n", chuoi1);
	fflush(stdin);
	
	printf("String input by fgets:\n");	
	fgets(chuoi2, sizeof(chuoi2), stdin);
	printf("The string is: ");
	puts(chuoi2);
	return 0;
}
