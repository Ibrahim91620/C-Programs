#include<stdio.h>
int main(){
int a[3],res;

for (int i = 0; i <3; i++)
{
   scanf("%d",&a[i]);
}

for (int i = 0; i <3; i++)
{
    res=a[i]*a[i];
     printf("%d,",res);
}





return 0;

}