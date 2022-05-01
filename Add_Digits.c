#include<stdio.h>
int main()
{
    int n,c=0,r;
    scanf("%d",&n);
    while(c!=1 && c!=2 &&c!=3 && c!=4 && c!=5 && c!=6 && c!=7 && c!=8&& c!=9)
    {
        c=0;
        while(n)
        {
            r=n%10;
            c=c+r;
            n=n/10;
        }
        n=c;
    }
    printf("%d",c);
}