#include <stdio.h>
int main()
{
    int n, dupl, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("Enter the number %d: ", i);
        scanf("%d", &dupl);
        sum += dupl;
    }
    printf("sum=%d", sum);
    return 0;
}