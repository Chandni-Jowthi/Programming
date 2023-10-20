#include<stdio.h>
int main()
{
    int p,i,y;
    scanf("%d %d %d",&p,&i,&y);
    int principle=(i*100)/(p*y);
    printf("%d",principle);
}