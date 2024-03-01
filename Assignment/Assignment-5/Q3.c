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
   printf(" <-%d\n",temp->data);
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
void peek(){

    if (front==0 && rear==0)
    {
       printf("link list is empty ");
    }else{

        printf("%d",rear->data);
    }
    
  

  


}


int main(){
   
   push(23);
   push(12);
   push(26);
   display();
    pop();
    peek();
    display();
  
return 0;
}