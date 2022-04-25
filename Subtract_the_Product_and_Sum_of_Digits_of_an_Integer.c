#include<stdio.h>
int main()
{
    int n,sum=0,mul=1,r,sub;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        mul=mul*r;
        sum=sum+r;
        n=n/10;
    }
    sub=mul-sum;
    printf("%d",sub);
}