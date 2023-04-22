#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node*link;
};
void add_beg(struct node**head,int data)
{
   struct node*temp=(struct node*)malloc(sizeof(struct node));
   temp->data=data;
   temp->link=NULL;
   struct node*t=*head;
   if(*head==NULL)
   {
      *head=temp;
   }
   else{
      while(t->link!=NULL)
      {
         t=t->link;
      }
      t->link=temp;
   }
}
void display(struct node*head)
{
   int c=0;
   struct node*t=head;
   while(t!=NULL)
   {
      printf(" %d -> ",t->data);
      t=t->link;
      c++;
   }
   printf("Number of Nodes are %d ",c);
}
void concat(struct node**head1,struct node**head2)
{
   struct node*t=*head1;
   while(t->link!=NULL)
   {
      t=t->link;
   }
   t->link=*head2;
}
int main()
{
   int n1,n2;
   struct node*head1=NULL;
   struct node*head2=NULL;
   printf("Enter the Nunber of nodes to be Added : \n");
   scanf("%d",&n1);
   int ele1;
   printf("Enter the Elements for List 1 :\n");
   for(int i=0;i<n1;i++)
   {
      printf("Enter the Element to be Entered : \n");
      scanf("%d",&ele1);
      add_beg(&head1,ele1);
   }
   printf("The List 1 is : \n");
   display(head1);

   printf("\nEnter the Nunber of nodes to be Added : \n");
   scanf("%d",&n2);
    int ele2;
   printf("Enter the Elements of the List 2: \n");
   for(int i=0;i<n2;i++)
   {
      printf("Enter the Element to be Entered : \n");
      scanf("%d",&ele2);
      add_beg(&head2,ele2);
   }
    printf("The List 1 is : \n");
   display(head2);


   printf("After Concatinating the Two Linked Lists  :\n\n");
   concat(&head1,&head2);
   display(head1);
   return 0;
}