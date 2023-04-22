 #include<stdio.h>
 #include<stdlib.h>
 #include<string.h>
 #include<math.h>
 int top=-1;
 int max;
 char *stack;
 void push(char ele)
 {
    if(top==max)
    {
       return;
    }
    else
    {
       top++;
       stack[top];
    }
 }
char pop()
 {
    char ele=' ';
    if(top==-1)
    {
       return;
    }
    else
    {
       ele=stack[top];
       top--;
    }
    return (ele);
 }
 int pri(char ele)
 {
    if(ele=='+' || ele=='-')
    {
       return 1;
    }
    else if(ele=='*'|| ele=='/')
    {
       return 2;
    }
    else if(ele=='^')
    {
       return 3;
    }
 }
 void convert(char arr[max])
 {
    char *result;
    result=calloc(max,sizeof(char));
    int k=0;
    for(int i=0;i<max;i++){
    if(arr[i]=='('  &&  (arr[i]>='0' && arr[i]<='9'))
      {
         push(arr[i]);
      }
      else if (arr[i]==')' && top!=-1)
      {
         k++;
         result[k]=pop();
      }  
      else
      {
         while (pri(stack[top])>pri(arr[i]) && top!=-1)
         {
            k++;
            result[k]=pop();
         }
      }
      push(arr[i]);
     }
     printf("RESULT : %s",result);
 }
 void main()
 {
    char arr[100];
   /* printf("Enter the Infix Expression : \n");
    scanf("%s",arr);*/
   max=100;
   stack=calloc(max,sizeof(char));
   convert("(7+(8+94)*(145-8))");
 }