// An array is a type of data structure that stores elements of the same type in a contiguous block of memory. In an array, , of size , each memory location has some unique index,  (where ), that can be referenced as  or .

// Reverse an array of integers.

// Note: If you've already solved our C++ domain's Arrays Introduction challenge, you may want to skip this.

// Example

// Return .

// Function Description

// Complete the function reverseArray in the editor below.

// reverseArray has the following parameter(s):

// int A[n]: the array to reverse


// Question link:-https://www.hackerrank.com/challenges/arrays-ds/problem

int* reverseArray(int a_count, int* a, int* result_count) {
    
    *result_count=a_count;
    int temp;
    
   int end=a_count-1;
   for(int i=0; i<a_count/2;i++)
   {
   temp=*(a+end);
   *(a+end)=*(a+i);
   *(a+i)=temp;
   end--;
   }
    return a;
    
      
}