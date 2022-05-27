#include<stdio.h>
int main()
{
    int n,a[200],i,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i+=2)
    {
        s=s+a[i];
    }
    printf("%d",s);
}