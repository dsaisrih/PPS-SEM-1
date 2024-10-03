#include<stdio.h>
int main() {
    int fact,add,old;
    for(int i=1; i<1000000; i++){
        old=i;
        add=0;
        int temp=i;
        while (temp!=0) {
            int rem=temp%10;
            fact=1;
            for (int i=1;i<=rem;i++) {
                fact=fact*i;}
            add=add+fact;
            temp/=10;
        }
        if (add==old) {
            printf("%d\n",old);}
        else  continue;
    }
return 0;
}

#include<stdio.h>
int main() {
    int num,fact,add=0,old;
    printf("Enter a number: ");
    scanf("%d",&num);
    old=num;
    while (num!=0) {
        int rem=num%10;
        fact=1;
        for (int i=1;i<=rem;i++) {
            fact=fact*i;}
        add=add+fact;
        num=num/10;
    }
    if (add==old) {
        printf("%d is a Strong number\n",old);}
    else {printf("%d is not a Strong number\n",old);
    return 0;
    }
}