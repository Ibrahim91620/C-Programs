#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
void traversal(struct Node *head){
    
    if(head!=NULL){
    struct Node *p;
    p=(struct Node *)malloc(sizeof(struct Node));
    p=head;
    while(p!=NULL){
        printf("The element is:- %d\n",p->data);
        p=p->next;
    }
    }


else{

    printf("The linked lIst is Empty");
}
}

struct Node *head=NULL;

void insertatend(struct Node *head,int data){
    struct Node *newNode;
     newNode=(struct Node *)malloc(sizeof(struct Node));
    struct Node *p;
    p=head;
    newNode->data=data;
   
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=newNode;
    newNode->next=NULL;
}


   

int main(){

struct Node *firstNode;
struct Node *secondNode;
struct Node *thirdNode;
firstNode=(struct Node *)malloc(sizeof(struct Node));
secondNode=(struct Node *)malloc(sizeof(struct Node));
thirdNode=(struct Node *)malloc(sizeof(struct Node));

firstNode->data=45;
firstNode->next=secondNode;

secondNode->data=34;
secondNode->next=thirdNode;

thirdNode->data=55;
thirdNode->next=NULL;
traversal(firstNode);

insertatend(firstNode,88);


 printf("after insertion at end node\n ");
traversal(firstNode);


return 0;
}