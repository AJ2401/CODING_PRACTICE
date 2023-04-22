#include<stdio.h>
#include<math.h>
int main()
{
    int Num,a,b,Sum=0;
    printf("Enter the Number to check Whether it is an Amstrong number or Not\n");
    scanf("%d",&Num);
    while(Num)
    {
           a=Num%10;
           Num=Num/10;
           b=pow(a,3);
           Sum=Sum+b;
    }
   if(Sum==Num)
   {
       printf("It is an amstrong Number%d\n",Num);
   }
   else
    {
     printf("It is not an amstrong Number%d\n",Num);
    }

    return 0;
}
