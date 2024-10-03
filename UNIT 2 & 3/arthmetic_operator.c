#include<stdio.h>
int main (){
    int a,b;
    printf("Enter The Value of a & b :");
    scanf("%d %d",&a,&b);
    int sum=a+b;
    int diff=a-b;
    int multiple=a*b;
    int div=a/b;
    printf("a=%d,b=%d",a,b);
    printf("Sum of a & b is %d\n",sum);
    printf("Difference of a & b is %d\n",diff);
    printf("Multiple of a & b is %d\n",multiple);
    printf("Division of a & b is %d\n",div);
    return 0;
}
