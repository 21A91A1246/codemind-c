#include<stdio.h>

int main()
{
    int n,j,i,b=0,f=1,a[20];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        b=a[i];
        f=1;
     for(j=1;j<=b;j++)
     {
         f=f*j;
     }
     printf("%d
",f);
    }
    
}