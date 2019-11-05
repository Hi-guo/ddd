#include<stdio.h>
int main(void)
{
    int x1,x2,x3,y1,y2,y3,S,L;
    float a,b,c,d;
    a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    b=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    c=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
    d=a+b+c/2;
    printf("Enter x1:\n");
    scanf("%d",&x1);
    printf("Enter x2:\n");
    scanf("%d",&x2);
    printf("Enter x3:\n");
    scanf("%d",&x3);
    printf("Enter y1:\n");
    scanf("%d",&y1);
    printf("Enter y2:\n");
    scanf("%d",&y2);
    printf("Enter y3:\n");
    scanf("%d",&y3);
    L+a+b+c;
    S=sqrt(d*(d-a)*(d-b)*(d-c));
    if(a+b>c)
    printf("L=%.2f,A=%.2f",L,S);
    else printf("impossible\n");
    return 0;
}