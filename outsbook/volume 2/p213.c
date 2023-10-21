#include<stdio.h>
int main()
{
    int l,w;
    scanf("%d %d",&l,&w);
    int edge=2;
    int area=(l-2*edge)*(w-2*edge);
    printf("%d",area);
}