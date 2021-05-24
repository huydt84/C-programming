# include <stdio.h>

void printnchars(char ch, int n) {
	int i;
	for (i=1; i<=n; i++) {
		printf("%c", ch);
	}
	printf("\n");
}

void main() {
	int edge, i;
	printf("Edges: ");
	scanf("%d", &edge);
	for (i=1; i<=edge; i++) {
		printnchars('*', i);
	}
}
