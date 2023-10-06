#include <stdio.h>
#include <stdlib.h>

struct single_linked_list {
	int date;
	struct single_linked_list*p;
};
void display_data(struct single_linked_list*head);
void display_data(struct single_linked_list*head){
	struct single_linked_list*temp=NULL;
	temp=head;

	if(temp==NULL){
		printf("link is empty");
	}
	int count=0;
	while(temp!=NULL){
		count++;
		printf("%d\n",temp->date);
	/*	if(temp->p!=NULL){
			printf("\nNODE is not empty\n");}
		else{
			printf("NODE is empty");} */
		temp=temp->p;
		}
	printf("End of the nodes");
	printf("\nThe total number of nodes present are %d\n",count);

}

int main(){
struct single_linked_list *head =(struct single_linked_list*)malloc(sizeof(struct single_linked_list));
head->date=10;
head->p=NULL;

struct single_linked_list *current = (struct single_linked_list*)malloc(sizeof(struct single_linked_list));
current->date=20;
current->p=NULL;

head->p=current;
current=(struct single_linked_list*)malloc(sizeof(struct single_linked_list));
current->date=40;
current->p=NULL;
head->p->p=current;
display_data(head);

return 0;
}



