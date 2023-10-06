#include <stdio.h>
#include <stdlib.h>
struct single_linked_list{
	int date;
	struct single_linked_list *p;
};

int main(){
	struct single_linked_list *head =(struct single_linked_list*)malloc(sizeof(struct single_linked_list));
	head->date=10;
	head->p=NULL;

	struct single_linked_list *current = (struct single_linked_list*)malloc(sizeof(struct single_linked_list));
	current->date=20;
	current->p=NULL;

	head->p=current;

	printf("NODE1=%d",head->date);
	printf("\nNODE2=%d\n",head->p->date);
	current=(struct single_linked_list*)malloc(sizeof(struct single_linked_list));
	current->date=40;
	current->p=NULL;
	head->p->p=current;
	printf("NODE3=%d\n",head->p->p->date);
	current=(struct single_linked_list*)malloc(sizeof(struct single_linked_list));
	current->date=50;
	current->p=NULL;
	head->p->p->p=current;
	printf("NODE4=%d\n",head->p->p->p->date);
return 0;
}
