#include<stdio.h>
int main()
{
    int n,i,s=0,n1,n2;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&n1,&n2);
        s=n1+n2;
        printf("%d
",s);
    }
    //printf("%d",s);
    return 0;
}