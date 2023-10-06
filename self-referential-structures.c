#include <stdio.h>
struct self

{
int a ;
char b;
struct self *p;
} ;

int main(){
	struct self X ;
	X.a = 4 ;
	X.b = 's' ;
	X.p = NULL;

	struct self Y ;
	Y.a = 8 ;
	Y.b = 'A' ;
	Y.p = NULL ;

	X.p = &Y;

	printf("Block1 = %d %c %d",X.a,X.b,X.p);
	printf("\nBlock2 = %d %c %d\n",X.p->a, X.p->b, X.p->p);

	return 0 ;
}
