#include<stdio.h>
#include<string.h>
int main()
{
    const int max =100;
    char sent[max];
    int len;
    printf("enter the sentence\n");
    gets(sent);
    len=strlen(sent);
    printf("%d\n",len);
    printf("%c\n",sent[len-1]);
    printf("%c\n",sent[0]);
}
