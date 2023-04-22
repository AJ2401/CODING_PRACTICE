#include<stdio.h>
#define max 12
struct queue
{
    int arr[max];
    int front,rear;
};
void intial(struct queue*);
void create(struct queue*,int);
void display(struct queue*);
int del(struct queue*);
int main()
{
    struct queue q;
    int n;
    intial(&q);
    create(&q,12);
    create(&q,17);
    create(&q,5);
    create(&q,2);
    create(&q,98);
    create(&q,65);
    printf("\n The Queue is :\n");
    display(&q);
    n=del(&q);
    if(n!=NULL)
    {
        printf("\n %d is deleted.",n);
    }
    printf("\n The Queue after Deletion is :\n");
    display(&q);
}
void intial(struct queue* q)
{
    q->front=-1;
    q->rear=-1;
}
void create(struct queue* q,int item)
{
    if(q->rear==max-1)
    {
        printf("\n The Queue is Full \n");
    }
    q->rear++;
    q->arr[q->rear]=item;
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
        printf("\n The Queue is Empty \n");
        return NULL;
    }
    data=q->arr[q->front];
    q->arr[q->front]=0;
    if(q->front==q->rear)
    {
        q->front=q->rear=-1;
    }
    else
    {
        q->front++;
    }
   return(data);
}
void display(struct queue* q)
{
    if(q->front==-1)
    {
        printf("\n The Queue is Empty \n");
    }
    else
    {
        printf("\n The Queue is : \n");
        for(int i=q->front;i<q->rear;i++)
        {
            printf("%d\t",q->arr[i]);
        }
    }
}
