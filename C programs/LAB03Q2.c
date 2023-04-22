#include<stdio.h>
int main()
{
    int High,Low,i;
    printf("\nThe Higher prime number\n");
    scanf("%d",&High);
    printf("\nThe Lower prime number\n");
    scanf("%d",&Low);
    printf("\nThe Range are %d %d",High,Low);
    printf("\nThe required prime numbers are--\n");
    i=Low;
    while(i<High)
    {
        if(i/i==1 && i/1==i)
        {
            printf("%d\n",i);
            i++;
        }
    }
    return 0;
}
