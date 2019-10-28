#include<stdio.h>
int main(void)
{
    int x;
    printf("Enter x:\n");
    scanf("%d",&x);
    printf("256:%d-%d-%d\n",x/100,x/10%10,x%10);
    return 0;
}