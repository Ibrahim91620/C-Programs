#include<stdio.h>
int main(){

  int a,b,prod=0;
     
  scanf("%d%d",&a,&b);
  for (int i = 1; i <=a; i++)
  {
    prod=prod+b;
  }
  printf("%d",prod);
  
 



    return 0;
}