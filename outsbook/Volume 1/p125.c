#include<stdio.h>
int main()
{
    int s1,d1,d2,s2;
    scanf("%d %d %d %d",&s1,&d1,&d2,&s2);
    int last=(s1*(d1-d2))/(s1+s2);
    printf("%d days",last);
}