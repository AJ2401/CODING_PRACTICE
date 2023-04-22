// Circular Linked List Using Single Linked List
#include<stdio.h>
#include<stdlib.h>
struct node{
   int data;
   struct node*link;
};
struct node*add_beg(struct node*head,int item)
{
   struct node*temp=malloc(sizeof(struct node));
   if(head==NULL)
   {
      temp->data=item;
      temp->link=temp;
   }
   else
   {
      temp->data=item;
      temp->link=head->link;
      head->link=temp;
   }
}
struct node*add_last(struct node*head,int item)
{
   struct node* temp= malloc(sizeof(struct node));
   struct node*t=head->link;
   while(t->link!=head->link)
   {
      t=t->link;
   }
   temp->data=item;
   temp->link=head->link;
   t->link=temp;
   return(head);
}
struct node*add_cert(struct node*head,int pos,int item)
{
   struct node*temp=malloc(sizeof(struct node));
   struct node*t=head->link;
   while(pos>1)
   {
      t=t->link;
      pos--;
   }
   temp->data=item;
   temp->link=t->link;
   t->link=temp;
   return(head);
}
struct node*del_first(struct node*head)
{
   if(head==NULL)
   {
      return;
   }
   else if(head->link==NULL)
   {
      free(head);
      head=NULL;
      return(head);
   }
   else
   {
      struct node*temp=head->link;
      head->link=temp->link;
      free(temp);
      temp=NULL;
      return(head);
   }
}
struct node*del_last(struct node*head)
{
    struct node*t=head->link;
   if(head==NULL)
   {
      return(head);
   }
   else if(head->link==head)
   {
      free(head);
      head=NULL;
      return(head);
   }
   else
   {
      while(t->link!=head)
      {
         t=t->link;
      }
      t->link=head->link;
      free(head);
      head=t;
      return(head);
   }

}
void display(struct node*head)
{
   int c=0;
   struct node*t=head->link;
   while(t->link!=head->link)
   {
      printf("%d -> ",t->data);
      t=t->link;
      c++;
   }
   printf("\nNumber of Nodes are : %d\n",c);
}
void search(struct node*head,int ele)
{
   struct node*t=head->link;
   while(t->link!=head->link)
   {
      if(t->data==ele)
      {
         printf("%d Element Found in the List \n");
      }
      else
      {
         t=t->link;
      }
   }
}
int main()
{

    struct node*head;
    head=NULL;
    int c,num,loc,i;
    printf("The Number of Iteration to be Done : ");
    scanf("%d",&i);
    for(int j=0; j<i; j++)
    {
        printf("Enter the option to Perform the Operation on the Linked List :\n1)Add Element Beginging\n2)Add Element at End\n3)Add_Element at Certain Position\n4)Deletion of Element At Front \n5)Deletion of the Element at End\n6)Display\n7)Search for the Element\n");
        scanf("%d",&c);
        switch(c)
        {
        case 1:
            printf("Enter the Element at Begining  : ");
            scanf("%d",&num);
            head=add_beg(head,num);
            break;
        case 2:
            printf("Enter the Element at End : ");
            scanf("%d",&num);
            head=add_last(head,num);
            break;
        case 3:
            printf("Enter the Element at Certain Position :");
            printf("Element :" );
            scanf("%d",&num);
            printf("Location : ");
            scanf("%d",&loc);
            head=add_cert(head,num,loc);
             break;
        case 4:
            printf("The Element Deletion at Front : ");
            head=del_first(head);
             break;
        case 5:
            printf("The Element Deletion at End : ");
           head= del_last(head);
            break;
        case 6:
            printf("The Linked List is : ");
            display(head);
             break;
        case 7:
            printf("Enter the Element to be Searched :  ");
            scanf("%d",&num);
            search(head,num);
             break;
        }
    }

}
