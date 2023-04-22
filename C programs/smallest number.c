#include<stdio.h>
int main()
{
       int a,b,c, smallest;
        printf("enter a, b & c \n "),
        scanf("%d %d %d,&a,&b,&c");

           if (a<b)
{
            if (a<c)
            {smallest=a;}
            else
            {smallest =c;}
        }
        else
        {
            if(b<c)
            {smallest=b;}
            else
            {smallest=c;}

        }
        printf("smallest is %d",smallest);
        return 0;
        }
