#include<stdio.h>
#define N 10
int queue[N];
int front=-1;
int rear=-1;
void enqueue(int n){
   if (rear==N-1)
   {
    printf("Overflow");
   }
   else if(front==-1 && rear==-1)
    {
        front=rear=0;
        queue[rear]=n;
    }else{
        rear++;
        queue[rear]=n;
    }
}
int dequeue(){
    if (front==-1 || front>rear){
        printf("underflow");
        return -1;
    }
   int n=queue[front];
   front++;

   return n;
    
} 
void display(){
    if (front==-1 && rear==-1)
    {
        printf("The queue is empty");
    }
    else{
        for (int i = front; i <rear+1; i++)
        {
        printf("%d \n",queue[i]);
        }
        
    }
}
int main(){
   enqueue(3);
   enqueue(5);
   enqueue(6);
   enqueue(7);
   enqueue(8);
   display();
   dequeue();
   dequeue();
   display();
    

    return 0;
}