# include <stdio.h>

void main() {
	int i = 0;
	char s[100];
	gets(s);
	while (s[i] != '\0') {
		if (s[i]==',' || s[i]==';' || s[i]=='.' || s[i]==':' || s[i]=='?' || s[i]=='!') s[i] = ' ';
		i++;
	}
	printf("Chuoi moi: %s", s);
}
