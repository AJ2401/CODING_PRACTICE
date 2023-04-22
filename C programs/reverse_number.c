#include<stdio.h>
int main()
{
    int num,rnum,temp;
    printf("Enter the number: ",num);
    scanf("%d",&num);
    while(num!=0)
    {
        rnum=0;
        temp=num%10;
        rnum=rnum*10+temp;
    }
    printf("The reverse number is %d\n",rnum);
    return 0;
}