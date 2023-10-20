#include<stdio.h>
int main()
{
    int x,y,t,t1,t2;
    scanf("%d %d %d %d",&x,&y,&t,&t1);
    t2=(t-(x*t1))/y;
    printf("%d Taka",t2);

}