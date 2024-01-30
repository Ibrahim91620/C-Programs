#include<stdio.h>
int fact(int n){
int res=1;
for (int i = 1; i <= n; i++)

    res =res*i;


return res;
}

int main(){

int num;
scanf("%d",&num);

printf("Factorial of  %d is %d ",num,fact(num));

    return 0;
}
