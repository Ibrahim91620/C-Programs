#include<stdio.h>
int binarysearch(int arr[], int n, int key){
int start=0, end=n-1;
int mid=(start+end)/2;

while (start<=end)

{
    if (arr[mid]==key)
    {
        return mid;
    }
    if(arr[mid]<key){
        start=mid+1;
            
    }
    else{
    end=mid-1;

    }

    mid=(start+end)/2;

}

return -1;

}

int main(){

int arr[6]={1,2,3,4,5,6};
 int index=binarysearch(arr,6,4);

 printf("The index is = %d",index);

    



    return 0;
}