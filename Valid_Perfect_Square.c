#include<stdio.h>
#include<math.h>
int main()
{
    int n,arr[20],i,sq;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sq=sqrt(arr[i]);
        if(sq*sq==arr[i])
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
        printf("
");
    }
}