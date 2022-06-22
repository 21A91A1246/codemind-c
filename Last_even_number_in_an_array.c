#include<stdio.h>
int main()
{
    int a[20],n,i,c=0,j,ind=0,ind1=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=n-1;j>=0;j--)
    {
        if(a[j]%2==0)
        {
            ind1=a[j];
            break;
        }
    }
    printf("%d",ind1);
}