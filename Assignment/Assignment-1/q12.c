#include<stdio.h>
int multiply(int a, int b){

    return a*b;
}
int subtract(int a, int b){

    if (a>b)
    {
        return a-b;
    }
    else{
        return b-a;
    }
    

}
int add(int a, int b){
    return a+b;
}
int divide(int a, int b){

    return a/b;
}
int main(){

int m=multiply(4,5);
int a=add(3,5);
int d=divide(6,7);
int s=subtract(4,7);

printf("%d %d %d %d",m,a,s,d);




    return 0;
}
