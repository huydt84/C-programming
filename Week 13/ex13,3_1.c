# include <stdio.h>

void main() {
	int i;
	int dem=0;
	char str[7];
	printf("Enter customer number: ");
	gets(str);
	
	for(i=0; i<3; i++) {
		if (isalpha(str[i])==0) dem++;
	}
	
	for(i=3; i<7; i++) {
		if (isdigit(str[i]==0)) dem++;
	}
	
	if(dem == 0) printf("Proper format!");
	else printf("Not in proper format!");
}
