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
   temp->next=NULL;
   temp->pre=NULL;
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
      printf("%d  ->  ",head->data);
      head=head->next;
      c++;
   }
   printf("\nNumber of nodes are : %d\n",c);
}
int len(struct node*head)
{
   int c=0;
   while(head!=NULL)
   {
      head=head->next;
      c++;
   }
   return(c);
}
int intersect(struct node*head1,struct node*head2)
{
   int l1=len(head1);
   int l2=len(head2);
   int l3=0;
   struct node*t1;
   struct node*t2;
   if(l1>l2)
   {
     l3=l1-l2;
     t1=head1;
     t2=head2;
   }
   if(l2>l1)
   {
    l3=l2-l1;
    t1=head2;
    t2=head1;
   }
   while(l3>0)
   {
      t1=t1->next;
      if(t1==NULL)
      {
         return -1;
      }
      l3--;
   }
   while(t1!=NULL && t2!=NULL)
   {
      if(t1==t2)
      {
         return(t1->data);
      }
      t1=t1->next;
      t2=t2->next;
   }

}
int main()
{
   struct node*head1=NULL;
   struct node*head2=NULL;
   int ele,opt,o,op,n=1,val=0;
   while(n>0)
   {
      printf("Choose your option : \n1)Add Element \n2) Display \n3) Intersection (If Any)\n");
      scanf("%d",&opt);
      switch(opt)
      {
         case 1:
         printf("Choose your Linked List : \n1)List 1 \nOR\n2)List 2 \n");
         scanf("%d",&o);
         switch (o)
         {
         case 1:
         printf("Enter any element : \n");
         scanf("%d",&ele);
         append(&head1,ele);
            break;
         case 2:
         printf("Enter any element : \n");
         scanf("%d",&ele);
         append(&head2,ele);
            break;
         }
         break;
         case 2:
         printf("Choose your Linked List : \n1)List 1 \nOR\n2)List 2 \n");
         scanf("%d ",&op);
         switch (op)
         {
         case 1:
         display(head1);
            break;
         case 2:
        display(head2); 
            break;
         }
         break;
         case 3:
         val=intersect(head1,head2);
         if(val==-1)
         {
            printf("No Intersection Point Exists !\n");
         }
         else
         {
            printf("Intersection Point Exists !\n");
         }
         break;
      }
   }
   return 0;
}