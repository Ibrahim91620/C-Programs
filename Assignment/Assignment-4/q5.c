#include<stdio.h>
#define N 10
int top=-1;
int Stack[N];
void push(){
      int x;
        scanf("%d",&x);
    if (top==N-1)
    {
      printf("Overflow");  
        
    }else{
      
   top++;
   Stack[top]=x;

    }
    
    




}


void pop(){
    int item;
    if (top==-1)
    {
        printf("underflow \n");
        
    }else{

        item=Stack[top];
        top--;
        printf("The pop element is %d",item);
    }
    
}

void show(){
    if (top==-1)
    {
        printf("underflow \n");
    }
    else{
      printf("Element present in the stack: \n");
      for (int i = top; i >= 0; i--)

      {
       printf("%d\n",Stack[i]);
      }
      
    }
    
}

int main(){
int ch;

do
{
    printf("Enter the choice for push , pop , and show :- ");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
        push();
        break;
    case 2:
        pop();
        break;
    case 3:
        show();
        break;
    default:
        break;
    }
} while (ch!=0);

    
 

 






    return 0;
}

