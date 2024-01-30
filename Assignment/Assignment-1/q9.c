#include<stdio.h>
int main(){
  int n;
  scanf("%d",&n);

  if (n%100==0)
  {
    if (n%400==0)
    {
        printf("leap year");
    }
    else{
        printf("not a leap year");
    }
    
  }
  else if(n%4==0){
    printf("Leap year");

  }
  else{
    printf("Non-leap year");
  }
 


    return 0;
}