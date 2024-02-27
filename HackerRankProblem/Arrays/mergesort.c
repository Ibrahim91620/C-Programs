#include<stdio.h>
#include<stdlib.h>
int main(){

    int a[6]={1,2,3,4,5,6};
    int b[6]={1,4,5,6,7,8};
    int c[12];
    int i=0,j=0,k=0;
    while (i<6 && j<6)
    {
        if (a[i]<b[j])
        {
            c[k]=a[i];
            i++;
            k++;
        }else{
            c[k]=b[j];
            j++;
            k++;
        }
        
    }
    while (i<6)
    {
        c[k]=a[i];
        i++;
        k++;
    }
     while (j<6)
    {
        c[k]=b[j];
        j++;
        k++;
    }
    for (int i = 0; i < 12; i++)
    {
       printf("%d,",c[i]);
    }
    
    

return 0;
}