#include<stdio.h>
int main()
{
    int x,d1,d2;
    scanf("%d %d %d",&x,&d1,&d2);
    int man=((x*d1)/d2)-x;
    printf("%d",man);
}