#include<stdio.h>

int main()
{
  char c;
  while (c=getchar()) {
	if (c == 8 || c == 9) {
  		printf("\\\\");	
		}
	else {
		putchar(c);
	}
  }
  return 0;
}
