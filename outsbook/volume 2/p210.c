#include<stdio.h>
int main()
{
    int n1,n2,n3,N,found=0;
    scanf("%d",&N);
    for(n1=1;n1<=N/3;n1++)
    {
        n2=n1+1;
        n3=n1+2;
    
    if(n1+n2+n3==N){
        printf("%d %d %d\n",n1,n2,n3);
        found=1;
        
    }
    }
    
}