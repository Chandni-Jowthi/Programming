#include<stdio.h>
int main()
{
    int p,x;
    scanf("%d %d",&p,&x);
    int prepop = (x*100/(p+100));
    printf("%d",prepop);
}