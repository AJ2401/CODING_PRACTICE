/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 10
struct stack
{
   char *arr;
   int top;
};
void intial(struct stack*S,int len)
{
   S->top=-1;
   S->arr=(char*)malloc(len*sizeof(char));
}
void push(struct stack*S,char a)
{
   if(S->top!=max)
   {
      S->top++;
      S->arr[S->top]=a;
   }
}
void pop(struct stack*S)
{
   if(S->top!=-1)
   {
      printf("%c ",S->arr[S->top]);
      S->top--;
   }
}
int main()
{
   struct stack*S;
   int i=0,j=0,len=0;
   char Array[110];
   //int j=0,len=0;
   printf("Enter the String : \n");
   scanf("%s",&Array);

   while(Array!='\0')
   {
        printf("%s",Array[j]);
       Array[j];
       j++;
       len++;
   }
   intial(&S,len);

   push(&S,Array);


   // int i=0;
   while(Array[i]!='\0')
   {
      if(Array[i]==" "||Array[i]==""||Array=="\t")
      {
         continue;
      }
      pop(&S);
      i++;
   }
}*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define Max 5000
int top=-1;
int max;
char*stack;
/*void intial(int n)
{
   top=-1;
   stack=calloc(n,sizeof(char));
   max=n;
}*/
void push(char item)
{
   if(top==max)
   {
      printf("OVERFLOW CONDITION \nCannot Insert \n");
   }
   else

   {
      top++;
      stack[top]=item;
   }
}
void pop()
{
   if(top == -1)
   {
    //printf("UNDERFLOW CONDITION \nCannot Pop Element \n");
      return;
   }
  else{
        printf("%c",stack[top]);
         top--;
         pop();
   }

}
void main()
{
   char str[Max];
   printf("Enter your String : \n");
   scanf("%[^\n]s",&str);
   max=strlen(str);
   stack=calloc(max,sizeof(char));
   for(int i=0;i<=strlen(str);i++)
   {
       push(str[i]);
   }
    printf("\n The REVERSED STRING IS : \n");
   for(int i=0;i<=strlen(str);i++)
   {
      if(str[i]==' '|| str[i]=='\t')
      {
         pop();
      }
   }
}