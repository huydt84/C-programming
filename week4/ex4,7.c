#include <stdio.h>

int main() {
	int qty;
	char isbn[100], title[100];
	float price, total;
	printf("Quantity: ");
	scanf("%d", &qty);
	printf("ISBN: ");
	scanf("%s", isbn);
	printf("Title: ");
	scanf("%s", title);
	printf("Price: ");
	scanf("%f", &price);
	total = price*104/100;
	printf("BK Bookseller\n\nQty\tISBN\tTitle\t\tPrice\t\tTotal\n________________________________________________________\n%d\t%s\t%s\t\t%f\t%f\n\nVAT:  4%%\nYou pay:  %f", qty, isbn, title, price, total, total);
	return 0;	
}
