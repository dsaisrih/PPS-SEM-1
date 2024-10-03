#include<stdio.h>
int main () {
    int f1=-1,f2=1,f3,i=2,n;
    printf("Enter the nth term: ");
    scanf("%d",&n);
    printf("Fibonacci Series:\n");
    printf("%d\n %d\n", f1,f2);
    while (i<n) {
        f3=f1+f2;
        printf("%d\n",f3);
        f1=f2;
        f2=f3;
        i++;
    }
    return 0;
}