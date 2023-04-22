#include<stdio.h>
#define max 10
struct queue
{
    int Arr[max];
    int front,rear;
};
int del(struct queue*);
void create(struct queue*,int num);
void display(struct queue*);
void intial(struct queue*);
int main()
{
    struct queue Q;
    int n;
    intial(&Q);
    create(&Q,12);
    create(&Q,8);
    create(&Q,45);
    create(&Q,18);
    create(&Q,14);
    create(&Q,1);
    create(&Q,27);
    display(&Q);
    n=del(&Q);
    n=del(&Q);
    printf("\n The Array after Deletion \n");
    display(&Q);
}
void intial(struct queue* q)
{
    q->front=-1;
    q->rear=-1;
}
void create(struct queue* q,int num)
{
    if(q->rear==max-1)
    {
        printf("\n The Queue is Full \n");
    }
    q->rear++;
    q->Arr[q->rear]=num;
    if(q->front==-1)
    {
        q->front=0;
    }
}
int del(struct queue *q)
{
    int num;
    if(q->front==-1)
    {
        printf("\n The Queue is Full \n");
    }
    num=q->Arr[q->front];
    q->Arr[q->front]=0;
    if(q->front==q->rear)
    {
        q->front=q->rear=-1;
    }
    else
    {
        q->front++;
    }
    return(num);
}
void display(struct queue* q)
{
    for(int i=0;i<max;i++)
    {
        printf("%d\t",q->Arr[i]);
    }
}
