#include<stdio.h>
#include<stdlib.h>
int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    int sum1=0,sum2=0,difference;
    for (int i=0; i<arr_rows; i++){
        
        sum1=sum1+arr[i][i];
    }
    
    for(int i=0; i<arr_rows; i++){
        
        sum2=sum2+arr[i][arr_columns-i-1];
    }
    
    difference=abs(sum2-sum1);
    
    return difference;

}
int main(){

return 0;
}