#include<stdio.h>
int main()
{
    int x,x1,x2;
    scanf("%d %d %d",&x,&x1,&x2);
    int r=(x-(2*x1)-x2)/3;
    int p=r+x1;
    int m=p+x2;
    printf("Proma %d, Rimi %d, Monisha %d",p,r,m);
}