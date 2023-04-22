// Queue using Array
#include<stdio.h>
#include<stdlib.h>
#define max 10
struct Queue
{
   int arr[max];
   int *front,rear;
}
void intail(struct Queue*Q)
{
   Q->rear=-1;
   Q->front=-1;
}
void Create(struct Queue*Q,int data)
{
   if(Q->rear==max-1)
   {
      printf("The Queue is FULL");
   }
   else
   {
      Q->rear++;
      Q->arr[Q->rear]=data;
      if(Q->front==-1)
      {
         Q->front=0;
      }
   }
}
int Del(struct Queue*Q)
{
   if(Q->front==-1)
   {
      printf("The Queue is Empty ");
   }
   else
   {
      int data=Q->arr[Q->front];
      if(Q->rear==Q->front)
      {
         Q->front=Q->arr=-1;
      }
      else
      {
         Q->front++;
         return(num);
      }
   }
}
void display(struct Queue*Q)
{
   for(int i=0;i<max;i++)
   {
      printf("%d",Q->arr[i]);
   }
   printf("\n");
}
int main()
{
   struct Queue Q;
   int n,num;
   printf("Enter the number of Elements : ");
   scanf("%d",&n);
   num=(struct Queue*)malloc(struct Queue*n,sizeof(int));
   printf("Enter the Elements : ");
   for(int i=0;i<n;i++)
   {
      scanf("%d",&num[i]);
      Create(&Q,num[i]);
   }
   printf("The Queue is : ");
   display(&Q);
   Del(&Q);
   Del(&Q);
   Del(&Q);
   printf("The Queue After Deletion of Some Elements");
   display(&Q);
}