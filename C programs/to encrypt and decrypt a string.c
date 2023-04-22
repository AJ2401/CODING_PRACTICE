#include<stdio.h>
#include<string.h>
int main()
{
 const int max =100;
 char sent[max];
 int len,i;
 printf("enter the sentence \n");
 gets(sent);
 for(i=0;sent[i]!='\0';i++);
 sent[i]=sent[i]+1;
 printf("the encrypted string is \n"),
 puts(sent);
for(i=0;sent[i]!='\0';i++)
sent[i]=sent[i]-1;
 printf("the decrypted string is \n");
 puts(sent);
 }







