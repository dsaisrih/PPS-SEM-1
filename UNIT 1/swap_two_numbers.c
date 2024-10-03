#include<stdio.h>
int main (){
    int a,b,t;
    printf("\n Enter The Numbers :");
    scanf("%d %d ",&a,&b);
    printf("Swapping Using Temporary");
    printf("\n Variable Before Swap ","A=%d","B=%d",a,b);
    t=a;
    a=b;
    b=t;
    printf("\n After Swap","A=%d","B=%d",a,b);
    printf("Swapping Without Using Temporary Variable");
    printf("Before Swap ","A=%d","B=%d",b,a);
    printf("After Swap ","A=%d","B=%d",a,b);
    return 0;
}
