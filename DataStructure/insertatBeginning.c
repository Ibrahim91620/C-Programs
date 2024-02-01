#include<stdio.h>
#include<stdlib.h>



struct Node{

	int data;
	struct Node *next;
};



void display(struct Node *head){


	if(head!=NULL){
		
		
		struct Node *p;


		p=head;

		while(p!=NULL){

			printf("ELEMENT is %d\n",p->data);

			p=p->next;

		}

	
	}else{

		printf("Link List is empty\n");
	}

}


struct Node * insertatBeginning(struct Node *head, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
 
    ptr->next = head;
    return ptr; 
}

void main(){

	struct Node *head;
	struct Node *second;
	struct Node *third;
	display(head);
   
   head =(struct Node *)malloc(sizeof(struct Node));
   second =(struct Node *)malloc(sizeof(struct Node));
   third =(struct Node *)malloc(sizeof(struct Node));

   head->data=12;
   head->next=second;

   second->data=13;
   second->next=third;

   third->data=14;
   third->next=NULL;
   printf("Linked list before Insertion:-\n");
   display(head);
  
    head=insertatBeginning(head,23);
	printf("linked list after insertion:\n");
	display(head);


}
