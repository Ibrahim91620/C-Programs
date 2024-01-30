#include<stdio.h>
float areaSquare(int a){

    return a*a;
}
float areaRectangle(int l,int b){
    return l*b;
}

float areaCircle(int r){

    return 3.14*r*r;
}
float areaTriangle(int b, int h){

    return (1/2.0)*b*h;
}
int main(){

 float circle=areaCircle(5);
 printf("%f \n",circle);
 float rectangle=areaTriangle(5,4.0);
 printf("%f \n",rectangle);
 float square=areaSquare(5);
 printf("%f \n",square);
 float triangle=areaTriangle(5,4);
 printf("%f",triangle);


}