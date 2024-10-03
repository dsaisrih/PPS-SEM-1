#include<stdio.h>
int main() {
    int i=1,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    first:
        printf("%d\n", i);
        i+=2;
        if(i<=n) goto first;
    return 0;
}