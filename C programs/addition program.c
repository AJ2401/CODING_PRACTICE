// addition program
#include<stdio.h>

//function main begins program execution
int main(void)
{
    int integer1;//first integer
    int integer2;//second integer
    int sum;//variable in which sum will be stored

    printf( "enter first integer\n "); //prompt
    scanf("%d",&integer1); //read an integer

    printf("enter second integer\n"); //prompt
    scanf("%d",&integer2); //read an integer

    sum=integer1+integer2; //assign total to sum

    printf("sum is %d\n",sum); //print sum
}
