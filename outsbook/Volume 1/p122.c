#include<stdio.h>
int main()
{
    int t,x,y;
    scanf("%d %d %d",&t,&x,&y);
    int savings=(t-(x+y))*12;
    printf("%d Taka",savings);
}