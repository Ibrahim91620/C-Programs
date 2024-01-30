#include<stdio.h>
int main(){
  int n;
  int t1=0, t2=1;
  
  int nextTerm=t1+t2;

  scanf("%d",&n);
  printf("%d,%d",t1,t2);
  for (int i = 3; i <= n; ++i)
  {
   printf(",%d",nextTerm);
   t1=t2;
   t2=nextTerm;

   nextTerm=t1+t2;

  }
  


    return 0;
}