#include<stdio.h>
int main (){
    float amount_of_caffiene_per_ml=0.4,caffiene_content,amount_of_caffiene;
    printf("Enter The Amount of Coffee (in ml) :");
    scanf("%f",&amount_of_caffiene);
    caffiene_content=( amount_of_caffiene_per_ml * amount_of_caffiene )/100;
    printf("The Amount of Caffiene present in given sample of coffee is %f mg",caffiene_content);
    return 0;
}