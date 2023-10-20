#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int profit=((y-x)*100)/x;
    printf("%d",profit);
}