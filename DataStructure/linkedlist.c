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

			printf("%d\n",p->data);

			p=p->next;

		}

	
	}else{

		printf("Link List is empty\n");
	}

}

void main(){

	struct Node *head;
	head = NULL;

	display(head);

	struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

	newNode -> data = 10;
	newNode -> next = NULL;


	head = newNode; 


	struct Node *secondNode = (struct Node *)malloc(sizeof(struct Node));

	secondNode -> data = 20;
	secondNode -> next = NULL;

	newNode -> next = secondNode;



	display(head);
	

}
