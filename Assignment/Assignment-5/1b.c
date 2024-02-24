//inserting an element at the end

#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;


};
struct Node *head=NULL;
void display(){


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


void insertend(int x){
    struct Node *newNode;
    newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=x;
    newNode->next=NULL;
    if (head==NULL)
    {
        newNode->data=x;
        head=newNode;
        
    }else{
        struct Node *temp;
        temp=head;
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newNode;
        newNode->next=NULL;
        
        
    }
    
}
int main(){
    insertend(24);
    insertend(12);
    insertend(25);
	printf("linked list after insertion:\n");
	display(head);

 





    return 0;
}