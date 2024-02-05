
//Given an array of integers, calculate the ratios of its elements 
//that are positive, negative, and zero. Print the decimal value of each fraction on a new line with  places after the decimal.
#include<stdio.h>
void plusMinus(int arr_count, int* arr) {
    
    double a=0,b=0,c=0;
    double n1=0,n2=0,n3=0;
    
    for(int i=0;i<arr_count; i++){
        if(arr[i]>0){
            a++;
        }
        else if(arr[i]<0){
            b++;
        }
        else{
            c++;
        }
    }
    n1=a/arr_count;
    n2=b/arr_count;
    n3=c/arr_count;
    printf("%0.6f\n%0.6f\n%0.6f",n1,n2,n3);

}

int main(){
    
    


    return 0;
}