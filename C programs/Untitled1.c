#include <stdio.h>
#include <math.h>
int main()
{

    int n=12345;
   // scanf("%d",&n);
    int len=0;
    int a,sum,unit,l_d,c=0,temp,t;
    unit=n%10;
    while (n)
    {
        len++;
        n=n/10;
     }
     l_d=n/(pow(10,len-2));
    printf("%d , %d",unit,l_d);
    return 0;
}
