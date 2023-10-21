#include<stdio.h>
int main()
{
    int n1,n2,n3,n4,N,found=0;
    scanf("%d",&N);
    for(n1=2;n1<=N/4;n1+=2)
    {
        n2=n1+2;
        n3=n1+4;
        n4=n1+6;
    
    if(n1+n2+n3+n4==N){
        printf("%d %d %d %d\n",n1,n2,n3,n4);
        found=1;
        
    }
    }
    
}