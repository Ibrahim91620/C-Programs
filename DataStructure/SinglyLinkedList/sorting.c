#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *head=NULL;
void traversal(){
    
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



void insertatend(){
    struct Node *newNode;
     newNode=(struct Node *)malloc(sizeof(struct Node));
     printf("Enter the data");
     scanf("%d",&newNode->data);

   if (head==NULL)
   {
   head=newNode;
   newNode->next=NULL;

   }
   else
   {
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
void sort(){
    struct Node *i,*j;
    int temp;
    for (i=head; i->next!=NULL; i=i->next)
    {
        for ( j = i->next; j->next!=NULL; j=j->next)
        {
           if (i->data>j->data)
           {
            temp=i->data;
            i->data=j->data;
            j->data=temp;
           }
           
        }
        
    }
}

   

int main(){

int choice;
do
{
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        insertatend();
        break;
    case 2:
      traversal();
      break;
      case 3:
      sort();
      break;
    
    default:
        break;
    }
} while (choice!=4);


return 0;
}