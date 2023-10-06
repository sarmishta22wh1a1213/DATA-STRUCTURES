#include <stdio.h>
struct sam {
	int a ;
	float b ;
	char c ;
	struct sam *p ;
} ;

int main(){
	struct sam X;
	X.a = 4815 ;
	X.b = 12.21 ;
	X.c = 'x' ;
	X.p = NULL ;

	struct sam Y ;
	Y.a = 1234 ;
	Y.b = 98.1 ;
	Y.c = 's' ;
	Y.p = NULL ;

	struct sam Z ;
	Z.a = 851;
	Z.b = 00.0 ;
	Z.c = 'w' ;
	Z.p = NULL;

	X.p = &Y;
	Y.p = &Z ;

	printf("Block1 = %d %f %c %d",X.a,X.b,X.c,X.p);
	printf("\nBlock2 = %d %f %c %d",X.p->a,X.p->b,X.p->c,Y.p);
	printf("\nBlock3 = %d %f %c %d\n",Y.p->a,Y.p->b,Y.p->c,Z.p);

	return 0; }

