#include<stdio.h>
int main()
{
    int d,x,y;
    scanf("%d %d %d",&d,&x,&y);
    int price=(x*y)/(d*12);
    printf("%d Taka",price);
}