#include<stdio.h>
int main() {
    //VARIABLE DEFINE
    float a,r,p=3.14;
    //TAKING INPUT
    printf("Enter the radius: ");
    scanf("%f",&r);
    //PROCESS
    a=p*r*r;
    //OUTPUT
    printf("The area of circle of given radius is: %f",a);
    return 0;
}