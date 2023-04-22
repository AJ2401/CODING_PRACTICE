#include<stdio.h>
int main()
{
    const int max=100;
    char sent[max];
    int i =0,count=0;
    printf("enter sentence\n");
    gets(sent);
    puts(sent);
    while(sent[i]!='\0')
    {
        count++;
        i++;
    }
    printf("\n no of characters=%d ",count);
    return 0;
}
