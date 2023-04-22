#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node*link;
};
void add_end(struct node**head,int item)
{
   struct node*temp=(struct node*)malloc(sizeof(struct node));
   temp->data=item;
   temp->link=NULL;
   struct node*t=*head;
   if(*head==NULL)
   {
      *head=temp;
   }
   else
   {
      while(t->link!=NULL)
      {
         t=t->link;
      }
      t->link=temp;
   }
}
void add_beg(struct node**head,int item)
{
   struct node*temp=(struct node*)malloc(sizeof(struct node));
   temp->data=item;
   temp->link=NULL;
   temp->link=*head;
   *head=temp;
}
void add_after(struct node**head,int item,int loc)
{
   struct node*t=*head;
   struct node*temp=(struct node*)malloc(sizeof(struct node));
   temp->data=item;
   temp->link=NULL;
   for(int i=0;i<loc;i++)
   {
      t=t->link;
      if(t->link==NULL)
      {
         printf("The Loction exceeds the location of the list !");
      }
   }
   temp->link=t->link;
   t->link=temp;
}
void del(struct node**head,int item)
{
   struct node*temp,*t;
   t=*head;
   while(t->link!=NULL)
   {
      if(t->data=item)
      {
         if(t==*head)
         {
            *head=t->link;
            free(t);
         }
         else
         {
            temp->link=t->link;
            free(t);
         }
         printf("%d Element is Deleted ! ",item);
      }
      else
      {
         temp=t;
         t=t->link;
      }
   }

}
void display(struct node*head)
{
   int c=1;
   struct node*t=head;
   
   while(t->link!=NULL)
   {
      printf(" %d -> ",t->data);
      t=t->link;
      c++;
   }
   printf(" %d -> ",t->data);
   printf("\nThe Number of Nodes are %d",c);

}

int main()
{
   struct node*head=NULL;
   int n,opt,item,loc;
   printf("Enter the Number of Iterations to be done ! : \n");
   scanf("%d",&n);
   while(n>0)
   {
      printf("Choose your Option out of these\n1)Add Element At End \n2)Add Element at Beginging\n3)Add Element at Location \n4)Delete an Node \n5)Display\n");
      scanf("%d",&opt);
      switch (opt)
      {
      case 1:
      printf("Enter any Element in the node : \n");
      scanf("%d",&item);
      add_end(&head,item);
      break;

      case 2:
      printf("Enter any Element in the node : \n");
      scanf("%d",&item);
      add_beg(&head,item);
      break;

      case 3:
      printf("Enter any Element in the node : \n");
      scanf("%d",&item);
      printf("Enter the Position for the Node to be Inserted : \n");
      scanf("%d",&loc);
      add_after(&head,item,loc);
      break;

      case 4:
      printf("Enter the data which is to be Deleted :\n");
      scanf("%d",&item);
      del(&head,item);
      break;

      case 5:
      display(head);
      break;

      default:
         break;
      }
   }
   return 0;
}