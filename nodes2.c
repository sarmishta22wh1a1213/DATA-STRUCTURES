#include <stdio.h>
struct nodes {
	int numbers;
	char symbol;
	float decimal;
	struct nodes *d;
};

int main(){
	struct nodes *p=(struct nodes*)malloc(sizeof(struct nodes));
	struct nodes *q=(struct nodes*)malloc(sizeof(struct nodes));
	p->numbers=19;
	p->symbol='s';
	p->decimal=12.21;
	p->d=NULL;

	q->numbers=23;
	q->symbol='a';
	q->decimal=764.38275425465367;
	p->d=NULL;

        p->d=q;

	printf("NODE1 = %d %c %f %d",p->numbers,p->symbol,p->decimal,p->d);
	printf("\nNODE2 = %d %c %f %d\n",p->d->numbers,p->d->symbol,p->d->decimal,p->d->d);

	return 0;
}
