#include<stdio.h>
int main()
{
    int y,x;
    scanf("%d %d",&x,&y);
    int passed=((x-y)*100)/x;
    printf("%d%%",passed);
}