#include<stdio.h>

int main(void)
{
    float distance;
    int time,cost;

    printf("Enter distance and time:\n");
    scanf("%f%d",&distance,&time);
     printf("cost is %d\n",cost);
     if(distance<=3){
         cost=10;
     }else if(distance<=13){
         cost=10+(distance-3)*2;
     }else{
         cost=10+7*2+(distance-10)*3;
     }
     cost=cost+time/5*2;
     printf("cost is %d\n",cost);
     return 0;
}