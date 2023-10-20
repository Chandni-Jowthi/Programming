#include<stdio.h>
int main()
{
    int x1,q1,r1,x2;
    scanf("%d %d %d %d",&x1,&q1,&r1,&x2);
    int q2=q1*x1/x2;
    int r2=(q1*x1+r1)%x2;
    printf("%d %d",q2,r2);
}    