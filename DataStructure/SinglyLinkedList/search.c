#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head=NULL;

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

void search(struct Node *head){
  struct Node *temp,*newNode;

  newNode=(struct Node *)malloc(sizeof(struct Node));
  printf("Enter the value that is present or not:- ");
  scanf("%d",&newNode->data);
  temp=head;
  while (temp!=NULL)
  {
    if (temp->data==newNode->data)
    {
        printf("It is present");
        return;
    }
   
    
    temp=temp->next;
  }
  printf("it is not present");


}


int main(){

    struct Node *head;
    struct Node *second;
    struct Node *third;
    
    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));

    head->data=12;
    head->next=second;

    second->data=45;
    second->next=third;

    third->data=25;
    third->next=NULL;
    traversal(head);
    search(head);
    



return 0;
}