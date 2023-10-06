#include <stdio.h>
struct node {
	int age;
	char name;
	struct node *p; 
};

int main() {
	struct node *block1=NULL;
	block1=(struct node*)malloc(sizeof(struct node));
	block1->age=19;
	block1->name='S';
	block1->p=NULL;

	printf("%d %c %d\n",block1->age,block1->name,block1->p);
	return 0 ;
}

	

