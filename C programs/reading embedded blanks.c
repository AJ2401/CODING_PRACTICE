#include<stdio.h>
int main ()
{
 const int max =80;//max character in string
 char str[max];//string variable str
printf("\n enter a string:");
gets(str);//put string in str or use gets(str)
printf("the string is \n");
puts(str);
return 0;
}
