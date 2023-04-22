#include<Stdio.h>
#include<ctype.h>
#include<stdlib.h>
#define max 3
#include<math.h>
struct postfix
{
    int stack[max];
    int top,n;
    char* s;
};
void push(struct postfix*,int item);
void display(struct postfix);
int pop(struct postfix*);
void setup(struct postfix*,char*);
void intial(struct postfix*);
void cal(struct postfix*);
int main()
{
    struct postfix q;
    char exp[max];
    intial(&q);
    printf("\nEnter the Expression\n");
    gets(exp);
    setup(&q,exp);
    cal(&q);
    display(q);
    return 0;
}
void intial(struct postfix* q)
{
    q->top=-1;
}
void setup(struct postfix* q,char* str)
{
 q->s=exp;
}
void push(struct postfix* p,int item)
{
    if(p->top==max-1)
    {
        printf("\n Stack is Full\n");
    }
    else
    {
        p->top++;
        p->stack[p->top]=item;
    }
}
int pop(struct postfix* p)
{
    int data;
    if(p->top==-1)
    {
        printf("\nStack is Empty\n");
    }
    else
    {
        data=p->stack[p->top];
        p->top--;
        return(data);
    }
}
    void cal(struct postfix* p)
    {
        int n1,n2,n3;
        while(*(p->s))
        {
            if(*(p->s)==""||*(p->s)=="\t")
            {
                p->s++;
            }
            if(isdigit(*(p->s)))
            {
                p->n=*(p->s)-'0';
                push(p,p->n);
            }
            else
            {
                n1=pop(p);
                n2=pop(p);
                switch(*(p->s))
                {
                case'+':
                    n3=n1+n2;
                    break;
                case'-':
                    n3=n2-n1;
                    break;
                case'*':
                    n3=n1*n2;
                    break;
                case'/':
                    n3=n2/n1;
                    break;
                case'%':
                    n3=n2%n1;
                    break;
                case'$':
                    n3=(int)pow((double)n1,(double) n2);
                    break;
                default:
                    printf("\n The Operator Dose not Exists\n ");
                    exit(1);
                }
               push(p,n3);
            }
            p->s++;
        }
    }
void display(struct postfix p)
{
    p.n=pop(&p);
    printf("\n The Result of Expression is = %d",p.n);
}
