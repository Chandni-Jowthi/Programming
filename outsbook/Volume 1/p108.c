#include<stdio.h>
int main()
{
    int d,q;
    scanf("%d %d",&d,&q);
    int r=d/3;
    int dividend=((d*q)+r);
    printf("%d",dividend);
}