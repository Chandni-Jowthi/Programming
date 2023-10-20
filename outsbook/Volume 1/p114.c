#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int profit=((x-y)*100)/x;
    printf("%d",profit);
}