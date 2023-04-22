#include<stdio.h>
#include<string.h>
int main()
{char s1[40],s2[50];
printf("\nenter the first string:");
gets(s1);
printf("\nenter the second string:");
gets(s2);
strcats(s1,s2);
printf("\nconcentrated string is:");
printf("%s",s1);
return 0;
}
