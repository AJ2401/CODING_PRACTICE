#include<stdio.h>
int main()
{
  printf("DANDA SRINATH(200904012)\n");
    int a,b;
    printf("Enter the upper Limit:\n");
    scanf("%d",&b);
    printf("Enter the Lower Limit:\n");
    scanf("%d",&a);
    for(int i=a ; i<b ; i++)
    {
        if(i>10)
        {
            printf("\n%d > 10",i);
            break;
        }
        if(i>15)
        {
            printf("\n%d > 15",i);
            continue;
        }
        else
        {
            printf("\n%d < 10",i);
        }
    }
    return 0;
}
