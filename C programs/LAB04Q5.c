#include<stdio.h>
int main()
{
    printf("DANDA SRINATH(200904012)\n");
    int Num,Sum,X,a;
    printf("Enter a Number to check its Generic Roots\n");
    scanf("%d",&Num);
    X=Num;
    while(Num>10)
    {
        for(Sum=0; Num>0; Num=Num/10)
        {
            a=Num%10;
            Sum=a+Sum;
        }
        if(Sum>10)
        {
            Num=Sum;
        }
    }
    printf("\n The Generic Root is %d ",Sum);

    return 0;

}
