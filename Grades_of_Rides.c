#include<stdio.h>
int main()
{
    int hurl,spin,sf;
    scanf("%d%d%d",&hurl,&spin,&sf);
    
    
    if(hurl>50 && spin>60 && sf>100)
    {
        printf("10");
    }
    else if(hurl>50 && spin>60 && sf<=100)
    {
        printf("9");
    }
    else if(hurl<=50 && spin>60 && sf>100)
    {
        printf("8");
    }
    else if(hurl>50 && spin<=60 && sf>100)
    {
        printf("7");
    }
    else if(hurl>50 || spin>60 || sf>100)
    {
        printf("6");
    }
    else
    {
        printf("5");
    }
}


