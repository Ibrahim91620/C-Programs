#include<stdio.h>
int main(){

  int a[5]={3,4,6,26,29},large,small;
  large=small=a[0];
  for (int i = 1; i < 5; ++i)
  {
 
    if (a[i]>large)
    {
        large=a[i];
        
    }
    if (a[i]<small)
    {
       small=a[i];
    }
    
    
  }
  printf("small is= %d \n",small);
  printf("large is= %d \n",large);
  
  
  

    return 0;

}