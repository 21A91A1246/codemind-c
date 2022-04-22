#include<stdio.h>
#include<math.h>
int main()
{
    int n,q,r,c,sum=0;
    scanf("%d",&n);
    c=log10(n)+1;
    q=n;
    while(q)
    {
        r=q%10;
        sum=sum+pow(r,c);
        c--;
        q=q/10;
    }
    if(sum==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}