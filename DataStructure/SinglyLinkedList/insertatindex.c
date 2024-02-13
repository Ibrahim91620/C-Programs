#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};


int lengthoflist(struct node *temp){
    int count=0;
    
   while (temp!=NULL)
   {
    
     temp=temp->next;
     count++;
   }
  
    
   return count;
    
}
void insertatindex(int pos,int data,struct node **head){
    struct node *newNode;
    
    int count=lengthoflist(*head);

    newNode=(struct node *)malloc(sizeof(struct node));
     newNode->data=data;
     newNode->next=NULL;
    
    if(pos<0 || pos>count)
    {
        printf("invalid option");
    }else if(pos==0){
        newNode->next=*head;
        *head=newNode;
    }
      else{
        struct node *temp=*head;

        while(--pos){
            temp=temp->next;
            newNode->next=temp->next;
            temp->next=newNode;

        }

      } 
        
           
}   
   
    



void display()
{
   
  struct node *p;
    
        while (p!= NULL)
        {
            printf("%d\n", p->data);
            p = p->next;
        }

} 
   



int main(){

    struct node *head=NULL;
	struct node *second=NULL;
	struct node *third=NULL;
	display(head);
   
   head =(struct node *)malloc(sizeof(struct node));
   second =(struct node *)malloc(sizeof(struct node));
   third =(struct node *)malloc(sizeof(struct node));

   head->data=12;
   head->next=second;

   second->data=13;
   second->next=third;

   third->data=14;
   third->next=NULL;

     insertatindex(2,45,&head);
    display(head);
    

return 0;
}