#include<stdio.h>
int main()
{
    int n,q,r,res=0;
    scanf("%d",&n);
    q=n;
    while(q>0)
    {
        r=q%10;
        res=res*10 + r;
        q=q/10;
    }
    if(res==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}