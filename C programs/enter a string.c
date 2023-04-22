#include<stdio.h>
int main()
{
    const int max= 80;//max character in the string;
     char str[max];//string varible str;

    printf("enter a string :\n");
    scanf("%s",str);//put string in str
    printf("%s",str);//display string from str
    return 0;
}
