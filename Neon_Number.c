#include<stdio.h>
int main()
{
    int n,sq,sum=0,r,temp;
    scanf("%d",&n);
    
    sq=n*n;
    while(sq!=0)
    {
    r=sq%10;
    sum+=r;
    sq/=10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}