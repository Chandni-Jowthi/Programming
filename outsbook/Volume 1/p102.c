#include<stdio.h>
int main()
{
    int D,Q,R;
    scanf("%d %d %d",&D,&Q,&R);
    int Divisor=(D-R)/Q;
    printf("%d\n",Divisor);
}