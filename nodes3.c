#include <stdio.h>
struct nodes3 {
	int a;
	char b;
	float c;
	struct nodes3 *d;
};

int main(){
	struct nodes3 *x=(struct nodes3*)malloc(sizeof(struct nodes3));
	struct nodes3 *y=(struct nodes3*)malloc(sizeof(struct nodes3));
	struct nodes3 *z=(struct nodes3*)malloc(sizeof(struct nodes3));

	x->a=1;
	x->b='e';
	x->c=34.987;
	x->d=NULL;
	printf("node1 = %d %c %f %d",x->a,x->b,x->c,x->d);

	y->a=2;
	y->b='r';
	y->c=00.398;
	y->d=NULL;
	x->d=y;
	printf("\nnode2 = %d %c %f %d",x->d->a,x->d->b,x->d->c,y->d);

	z->a=3;
	z->b='u';
	z->c=62.5432;
	z->d=NULL;

	
	y->d=z;	
	
	printf("\nnode3 = %d %C %f %d\n",y->d->a,y->d->b,y->d->c,z->d);

	//printf("changes are\n %d converted to %d",x->d,y);
	//printf("\nand %d converted to %d\n",y->d,z);

	return 0;
}
