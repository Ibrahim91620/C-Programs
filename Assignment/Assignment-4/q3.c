#include<stdio.h>
int main(){
int n;

scanf("%d",&n); //size of the array
int a[n];
int find;


for (int i = 0; i <n; i++)
{
    scanf("%d",&a[i]);//taking input element of array

}
scanf("%d",&find); //target for finding
for (int i = 0; i <n; i++)
{
  if (a[i]==find)
  {
    printf("Number is found at %d",i);
    return 0;
  }
  
}
printf("not found");



    



    return 0;
}