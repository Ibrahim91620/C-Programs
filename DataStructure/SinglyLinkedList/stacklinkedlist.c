#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
struct node *top=0;
void push(int x){
    struct node *newNode;
    newNode=(struct node *)malloc(sizeof(struct node));
    newNode->data=x;
    newNode->link=top;
    top=newNode;

}
void display(){
    struct node *p;
    p=top;
    if(top==0){
        printf("stack is underflow");

    }else{
        while (p!=NULL)
        {
            printf("%d\n",p->data);
            p=p->link;
        }
        
    }
}
void peek(){
    if (top==0)
    {
        printf("Stack is Empty");
    }
    else{
        printf("%d\n",top->data);
    }
    
}
void pop(){
    struct node *p;
    p=top;
    if (top==0)
    {
        printf("underflow");
    }else{
        printf("The pop element is %d\n",top->data);
        top=top->link;
        free(p);
    }
    
}
int main(){

    push(5);
    push(6);
    display();
    peek();
    
    pop();
    display();

return 0;
}