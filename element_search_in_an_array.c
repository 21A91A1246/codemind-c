#include<stdio.h>
int main()
{
    int n,a[100],i,b,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&b);
    for(i=0;i<n;i++)
    {
    if(a[i]==b)
    {
        c=1;
        break;
    }
    }
    if(c==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
