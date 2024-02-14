#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *front=0;
struct Node *rear=0;






void push(int x){
    struct Node *newNode;
    newNode=(struct Node *)malloc(sizeof(struct Node));

    newNode->data=x;
    newNode->next=NULL;
    if (front==0 && rear==0)
    {
      front=rear=newNode;
    }
    else{
        rear->next=newNode;
        rear=newNode;
    }
    

}
void display(){
  struct Node *temp;
  temp=front;
  while (temp!=NULL)
  {
   printf(" <-%d",temp->data);
   temp=temp->next;
  }

  
  



}
void pop(){
    struct Node *temp;
    temp=front;
    if (front==0 && rear==0)
    {
        printf("The queue is empty");
    }
    else{
         printf("The pop element is %d\n",front->data);
        front=front->next;
        free(temp);
       
    }
    
    

}


int main(){
   
   push(23);
   push(12);
   
   display();
    pop();
    display();

return 0;
}