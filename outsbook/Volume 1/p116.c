#include<stdio.h>
int main()
{
    int y,x,i;
    scanf("%d %d %d",&x,&y,&i);
    int rate=(i*100)/(x*y);
    printf("%d%%",rate);
}