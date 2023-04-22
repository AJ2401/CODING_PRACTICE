#include<stdio.h>
#define max 12
typedef struct queue
{
    int arr[max],i;
    int front,rear;
};
void intial(struct queue*);
void create(struct queue*,int);
int del(struct queue*);
void display(struct queue*);
int main()
{
    struct queue s;
    int n;
    intial(&s);
    create(&s,12);
    create(&s,78);
    create(&s,45);
    create(&s,2);
    create(&s,1);
    create(&s,74);
    create(&s,13);
    printf("\n The Queue is : \n");
    display(&s);
    n=del(&s);
    if(n!=NULL)
    {
        printf("\n %d is deleted \n",n);
    }
    n=del(&s);
    if(n!=NULL)
    {
        printf("\n %d is deleted \n",n);
    }
    printf("\n After Deletion the Queue is : \n");
    display(&s);
}
void intial(struct queue* q)
{
    q->front=-1;q->rear=-1;
    for(int i=0;i<max;i++)
    {
        q->arr[i]=0;
    }
}
void create(struct queue* q,int n)
{
    if((q->rear==max-1 && q->front==0) || (q->rear+1==q->front) )
    {
        printf("\n Queue is Full \n");
    }
    if(q->rear==max-1)
    {
        q->rear=0;
    }
    else
    {
        q->rear++;
    }
    q->arr[q->rear]=n;
    if(q->front==-1)
    {
        q->front=0;
    }
}
int del(struct queue* q)
{
    int data;
    if(q->front==-1)
    {
        printf("\nQueue is Empty \n");
    }
    data=q->arr[q->front];
    q->arr[q->front]=0;

    if(q->front==q->rear)
    {
        q->front=-1;
        q->rear=-1;
    }
    else
    {
        if(q->front==max-1)
            {
                q->front=0;
            }
        else
        {
            q->front++;
        }
    }
    return(data);
}
void display(struct queue* q)
{
    for(int i=0;i<max;i++)
    {
        printf(q->arr[i]);
    }
    printf("\n");
}
