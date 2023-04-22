#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node*pre,*next;
};
void append(struct node**head,int item)
{
   struct node*temp=(struct node*)malloc(sizeof(struct node));
   temp->data=item;
   temp->pre=NULL;
   temp->next=NULL;
   if(*head==NULL)
   {
      *head=temp;
   }
   else
   {
      struct node*t=*head;
      while(t->next!=NULL)
      {
         t=t->next;
      }
      t->next=temp;
      temp->pre=t;
   }
}
void display(struct node*head)
{
   int c=0;
   while(head!=NULL)
   {
      printf("%d  -> ",head->data);
      head=head->next;
      c++;
   }
   printf("\n Number of nodes are %d \n",c);
}
void replace(struct node**head,int k)
{
   struct node*t=*head;
   int len=0;
   while(t!=NULL)
   {
      len++;
      t=t->next;
   }
   struct node*tail=*head;
   struct node*new_tail;
   struct node*new_head;
   int count=1;
   while(tail->next!=NULL)
   {
      if(count==len-k)
      {
         new_tail=tail;
      }
      if(count==len-k+1)
      {
         new_head=tail;
      }
      tail=tail->next;
      count++;
   }
   new_head->pre=NULL;
    new_tail->next=NULL;
    tail->next=*head;
    *head=new_head;
}
int main()
{
   struct node*head=NULL;
   int opt,k,ele,n=10;
   while(n>0){
   printf("Choose your Option \n1)Add A Node \n2)Display \n3)K node Replace \n");
   scanf("%d",&opt);
   switch (opt)
   {
   case 1:
   printf("Enter the Element : \n");
   scanf("%d",&ele);
   append(&head,ele);
      break;
      case 2:
      printf("The Linked List is : \n");
      display(head);
      break;
      case 3:
      printf("Enter the Value of K : \n");
      scanf("%d",&k);
      replace(&head,k);
      break;
   default:
      break;
   }
}
 return 0;
}
