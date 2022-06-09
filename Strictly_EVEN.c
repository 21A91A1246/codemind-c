#include<stdio.h>
int main()
{
    int n,a[1000],i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    if(a[i]%2==0 && i%2==1)
    {
        c=1;
        printf("False");
        break;
    }
    }
    
    if(c==0)
    {
        printf("True");
    }
    
}