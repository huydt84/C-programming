# include <stdio.h>

void swap(int *a, int *b, int *c) {
	int temp = *a;
	*a = *b;
	*b = *c;
	*c = temp;
}

void main() {
	int x=1, y=2, z=3;
	int *p; 
	int *q; 
	int *r;
	p = &x; q = &y, r = &z;
	
	printf("x = *p = %d, p = %p\n", *p, p);
	printf("y = *q = %d, q = %p\n", *q, q);
	printf("z = *r = %d, r = %p\n", *r, r);
	
	swap(p, q, r);
	printf("\nx = %d\n", x);
	printf("y = %d\n", y);
	printf("z = %d\n", z);
	printf("*p = %d, p = %p\n", *p, p);
	printf("*q = %d, q = %p\n", *q, q);
	printf("*r = %d, r = %p\n", *r, r);
	
	int *w;
	w = p;
	p = q;
	q = r;
	r = w;
	printf("\nx = %d\n", x);
	printf("y = %d\n", y);
	printf("z = %d\n", z);
	printf("*p = %d, p = %p\n", *p, p);
	printf("*q = %d, q = %p\n", *q, q);
	printf("*r = %d, r = %p\n", *r, r);
	
}
