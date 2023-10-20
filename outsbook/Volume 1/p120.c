#include<stdio.h>
int main()
{
    int y,x;
    scanf("%d %d",&x,&y);
    int increase=((x-y)*10)/100;
    printf("%d%%",increase);
}