#include<stdio.h>
int main()
{
    int n,a[100],e=0,odd=0,i,s;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    if(a[i]%2!=0)
    {
     odd=odd+a[i];   
    }
    else
    {
        e=e+a[i];
    }
    }
    if(odd>e)
    {
    s=odd-e;
    }
    else
    {
        s=e-odd;
    }
    printf("%d",s);
}