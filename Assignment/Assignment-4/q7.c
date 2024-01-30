#include <stdio.h>
#define N 50

char Stack[N];
int top = -1;
void push(char r)
{
    
    if (top == N - 1)
    {
        printf("The stack is overflow");
    }
    else
    {
        top++;
        Stack[top] = r;
    }
}
void pop()
{
    char item;
    if (top == -1)
    {
        printf("Underflow");
    }
    else
    {
        item = Stack[top];

        top--;
        printf("The pop element is %c ", item);
    }
}
void show()
{
    if (top == -1)
    {
        printf("underflow");
    }
    else
    {
        printf("Element present in the stack: \n");
        for (int i = top; i >= 0; i--)
        {
            printf("%c\n", Stack[i]);
        }
    }
}

int main()
{

    push('v');
    push('a');
    push('b');
    show();
    pop();
    pop();
    show();
   

    return 0;
}