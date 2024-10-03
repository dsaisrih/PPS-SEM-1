#include <stdio.h>
int main()
{
    float n;
    printf("Enter the number: ");
    scanf("%f", &n);
    if (n > 0)
    {
        printf("Entered number is positive");
    }
    else if (n < 0)
    {
        printf("Entered number is negative");
    }
    else
    {
        printf("Entered number is Zero");
    }
    return 0;
}