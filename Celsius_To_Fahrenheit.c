#include<stdio.h>
int main()
{
    int cel;
    float fah;
    scanf("%d",&cel);
    fah= ((cel * 9.0 / 5.0) + 32);
    printf("%.2f",fah);
}