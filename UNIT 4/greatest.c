#include <stdio.h>
int main()
{
    float a, b;
    printf("Enter number A: ");
    scanf("%f", &a);
    printf("Enter number B: ");
    scanf("%f", &b);
    if (a > b)
    {
        printf("A is greatest");
    }
    else if (b > a)
    {
        printf("B is greatest");
    }
    else
    {
        printf("Both are equal");
    }
    return 0;
}