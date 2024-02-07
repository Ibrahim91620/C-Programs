//question link:-https://www.hackerrank.com/challenges/staircase/problem
// Its base and height are both equal to . It is drawn using # symbols and spaces. The last line is not preceded by any spaces.

// Write a program that prints a staircase of size .

// Function Description

// Complete the staircase function in the editor below.

// staircase has the following parameter(s):


void staircase(int n) {
    
    for(int i=n; i>0; i--){
        for(int j=1; j<=n; j++){
            if(j<i){
                printf(" ");
            }else{
                
                printf("#");
            }
            
            
        }
       
        printf("\n");
    }
    

}