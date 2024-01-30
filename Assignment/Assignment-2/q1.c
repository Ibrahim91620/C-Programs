#include<stdio.h>
int main(){
    int n,digit,rev=0;
    scanf("%d",&n);

    while (n!=0)
    {
        digit=n%10;
        rev=(10*rev)+digit;
        n=n/10;

    }
    
    printf("The reverse is %d",rev);




    return 0;
}