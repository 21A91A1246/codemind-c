#include<stdio.h>
int main()
{
    int n,a[1000],i;
    float avg,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
        avg=s/n;
    }
    printf("%0.2f",avg);
}