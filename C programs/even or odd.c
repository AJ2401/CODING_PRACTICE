#include<stdio.h>
intmain()
{
    int x;
    printf("input an integer/n");
    scanf("%d",&x);
    if((x%2)==0)
    {
        printf("it is an even number/n");
    }
if((x%2)==1)
{
    printf("it is an odd number/n");
}
return 0;
}
