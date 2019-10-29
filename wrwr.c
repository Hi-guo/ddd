#include<stdio.h>
int main(void)
{
    int a,b,c,d;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("Enter c:");
    scanf("%d",&c);
    d=a+b+c/3;
    printf("d is %d\n",d);
    return 0;
}