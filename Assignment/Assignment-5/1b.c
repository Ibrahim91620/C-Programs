//inserting an element at the end

#include<stdio.h>
#include<stdlib.h>

struct Node {
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


struct Node *insertatEnd(struct Node *head,int data){
      struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));

    ptr->data=data;
    struct Node *p=head;
    while (p->next!=NULL)
    {
       
       p=p->next;
      
    }
    
     p->next=ptr;
    ptr->next=NULL;
        
          return head;


}

int main(){

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
  
    head=insertatEnd(head,23);
    
	printf("linked list after insertion:\n");
	display(head);

 





    return 0;
}