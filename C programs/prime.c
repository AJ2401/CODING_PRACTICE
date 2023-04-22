#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number ",num);
    scanf("%d",&num);
    if(num%num==0 && num%1==num)
    {
        printf("The %d is prime number ",num);
    }
    else
    {
       printf("The %d is not prime number ",num);
    }
    return 0;
}
