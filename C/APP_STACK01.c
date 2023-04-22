#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define max 3
struct  infix
{
    int target[max];
    int stack[max];
    int *s,*t;
    int top;
};
void push(struct infix*,char);
void display(struct infix);
char pop(struct infix*);
void convert(struct infix*);
void setup(struct infix*,char*);
void intial(struct infix*);
int priority(char);
int main()
{
    struct infix p;
    char exp[max];
    infix(&p);
    printf("\n Enter your Expression \n");
    gets(exp);
    setup(&p,exp);
    convert(&p);
    printf("\n The Required Expression is: \n");
    display(p);
}
void intial(struct infix* p)
{
    p->top=-1;
    strcpy(p->target,"");
    strcpy(p->stack,"");
    p->t=p->target;
    p->s="";
}
void setup(struct infix* p,char* str)
{
    p->s=str;
}
void push(struct infix* p,char item)
{
    if(*(p->s)==max-1)
    {
        printf("\n Stack is Full \n");
    }
    else
    {
        p->top++;
        p->stack[p->top]=item;
    }
}
char pop(struct infix* p)
{
    char data;
    if(*(p->s)==-1)
    {
        printf("\n Stack is Empty\n");
        return(NULL);
    }
    else
    {
        data=p->stack[p->top];
        p->top--;
        return(data);
    }
}
void convert(struct infix* p)
{
 char opr;
 while(*(p->s))
 {
    if(*(p->s)==" " || *(p->s)=="\t")
    {
        p->s++;
        continue;
    }
    if(isdigit(*(p->s))|| isalpha(*(p->s)))
    {
        while(isdigit(*(p->s))||isalpha(*(p->s)))
        {
            *(p->t)=*(p->s);
            p->t++;
            p->s++;
        }
    }
    if(*(p->s)=='(')
    {
     push(p,*(p->s));
     p->s++;
    }
    if(*(p->s)=='+'||*(p->s)=='-'||*(p->s)=='*'||*(p->s)=='/'||*(p->s)=='%'||*(p->s)=='$')
    {
        if(p->top!=-1)
        {
            opr=pop(p);
            while(priority(opr)>= priority(*(p->s)))
            {
                *(p->t)=opr;
                p->t++;
                opr=pop(p);
        }
        push(p,opr);
        push(p,*(p->s));
        }
        else
        {
            push(p,*(p->s));
            p->s++;
        }
 }
 if(*(p->s)=='(')
 {
     opr=pop(p);
     while(opr!='(')
     {
         *(p->s)=opr;
         p->s++;
         opr=pop(p);
     }
     p->s++;
 }
}
}
int priority(char ch)
{
    if(ch=='$')
    {
     return(3);
    }
    if(ch=='*'||ch=='/'||ch=='%')
    {
     return(2);
    }
    if(ch=='-'||ch=='+')
    {
     return(1);
    }
    else
    {
    return(0);
    }
}
void display(struct infix p)
{
    char *temp=p.stack[0];
    while(*temp)
    {
    printf("%s",*temp);
    temp++;
    }
}
