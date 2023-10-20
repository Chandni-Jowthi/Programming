#include<stdio.h>
int main()
{
    int X,M,Y;
    scanf("%d %d %d",&X,&M,&Y);
    int days = (X * M) / (X + Y);
    printf("%d\n",days);
}