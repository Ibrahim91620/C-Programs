#include<stdio.h>
#define N 50
char queue[N];
int front=-1;
int rear=-1;
void enqueue(char n){
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
void dequeue(){
    if (front==-1 && rear==-1){
        printf("underflow");
        
    }
    else if (front==rear)
    {
    front=rear=-1;
    }else{
        printf("The dequeue element is %c\n",queue[front]);
        front++;
    }
    
}

void display(){
    if (front==-1 || front>rear)
    {
        printf("The queue is empty");
    }
    else{
        for (int i = front; i <rear+1; i++)
        {
        printf("%c \n",queue[i]);
        }
        
    }
}
int main(){
   enqueue('a');
   enqueue('b');
   enqueue('c');
   enqueue('d');
   enqueue('e');
   display();
   dequeue();
   display();
   
    

    return 0;
}