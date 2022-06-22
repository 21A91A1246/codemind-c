#include<stdio.h>
int main()
{
    int n,d,a[10],i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&d);
    for(i=0;i<n;i++)
    {
        if(d==a[i])
        {
            c+=1;
        }
    }
    printf("%d",c);
}