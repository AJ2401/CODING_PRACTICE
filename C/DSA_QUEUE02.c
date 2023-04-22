#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* link;
};
struct queue
{
     struct node* front;
     struct node* rear;
};
void intial(struct queue*);
void add(struct queue *,int );
void deleteq(struct queue*);
int del(struct queue*);
void display(struct  queue*);
int main()
{
    struct queue obj;
    int n;
    intial(&obj);
    add(&obj,12);
    add(&obj,14);
    add(&obj,1);
    add(&obj,78);
    add(&obj,98);
    add(&obj,18);
    display(&obj);
    n=del(&obj);
    if(n!= NULL)
    {
        printf("\n %d element is deleted \n",n);
    }
    printf("\n After Deletion of element :\n");
    display(&obj);
    printf("\n Deallocating the Queue: \n");
    deleteq(&obj);
    return 0;
}
void intial(struct queue* q)
{
    q->front=NULL;
    q->rear=NULL;
}
void add(struct queue* q,int num)
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node*));
    if(temp==NULL)
    {
        printf("\n The Queue is Full\n");
    }
    temp->data=num;
    temp->link=NULL;
    if(q->front==NULL)
    {
        q->front=q->rear=temp;
    }
    q->rear->link=temp;
    q->rear=q->rear->link;
}
int del(struct queue* q)
{
    struct node* temp;
    int item;
    if(q->front==NULL)
    {
        printf("\n Queue is Empty \n");
    }
    item=q->front->data;
    temp=q->front;
    q->front=q->front->link;
    free(temp);
    return(item);
}
void deleteq(struct queue* q)
{
    struct node* temp;
    if(q->front==NULL)
    {
        printf("\n The Queue is Empty\n");
    }
    while(q->front!=NULL)
    {
        temp=q->front;
        q->front=q->front->link;
        free(temp);
    }
}
void display(struct queue* q)
{
    while(q->front->link!=NULL)
    {
        printf("%d\t",q->front->data);
        q->front->link++;
    }
}
