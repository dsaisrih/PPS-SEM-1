#include<stdio.h>
int main (){
    float r;
    printf("Enter a Decimal Number :");
    scanf("%f",r);
    int y=r ;  //type casting
    float z=r-y;
    printf("Fractional Part of %f is %f",r,z);
    return 0;

}