#include<stdio.h>
void Func(int m)
{
    int Num=m;
    int a=m%10;
    int Sum=Sum+(a*a*a);
    m=m/10;
    if(Sum==Num)
    {
        printf(" %d , ",Num);
    }
}
int main()
{
    int i=1;
    printf("The Armstrong Numbers between 1 to 500 Numbers :");
    while(i<500)
    {
        void Func(i);
        i++;
    }
    return 0;
}
