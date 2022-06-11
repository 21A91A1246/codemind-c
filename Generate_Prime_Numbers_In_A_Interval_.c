#include<stdio.h>
int Prime(int n)
{
    int i;
    for (i=2; i*i<=n; i++)
    {
        if (n%i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n1,n2,i;
    scanf("%d",&n1);
    scanf("%d",&n2);
    
    for(i=n1;i<=n2;i++)
    {
        if(i==1)
        {
            continue;
        }
        if (Prime(i))
        {
            printf("%d
",i);
        }
    }
}