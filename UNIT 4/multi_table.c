#include <stdio.h>
int main()
{
    int n, i = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    do
    {
        printf("%d X %d = %d\n", n, i, n * i);
        i++;
    } while (i <= 10);
    return 0;
}