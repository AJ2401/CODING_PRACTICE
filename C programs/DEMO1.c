//Check Whether BST or not 
#include<stdio.h>
#include<stdlib.h>
struct node
{
     int data;
     struct node*right;
     struct node*left;
};
void create(struct node**head,int item)
{
     int opt;
     struct node*temp=(struct node*)malloc(sizeof(struct node));
     temp->left=NULL;
     temp->right=NULL;
     printf("Choose your Option : \n1)Right\n2)Left\n3)Right_LeftMost\n4)Left_RightMost\n\n");
     scanf("%d",&opt);
     struct node*t=*head;
     switch(opt)
     {
          case 1:
          while(t->right!=NULL)
          {
               t=t->right;
          }
          t->right=temp;
          break;
          case 2:
          while(t->left!=NULL)
          {
               t=t->left;
          }
          t->left=temp;
          break;
          case 3:
          t=t->right;
          while(t->left!=NULL)
          {
               t=t->left;
          }
          t->left=temp;
          break;
          case 4:
            t=t->left;
           while(t->right!=NULL)
          {
               t=t->right;
          }
          t->right=temp;
          break;
     }
}
void preorder(struct node*head)
{
     if(head==NULL)
     {
          return;
     }
     printf(" %d ",head->data);
     head=head->left;
     head=head->right;
}
int check(struct node*head)
{
     struct node*t=head;
     while(head->right!=NULL)
     {
          if(head->data<t->data)
          {
               return(0);
          }
          head=head->right;
     }
     *head=*t;
     while(head->left!=NULL)
     {
          if(head->data>t->data)
          {
               return(0);
          }
          head=head->left;
     }
}
int main()
{
     struct node*head=NULL;
     int opt,val;
     int n=1;
     while(n>0)
     {
          printf("Choose your option : \n1)Append \n2)Preorder\n3)Check For BST \n\n");
          scanf("%d",&opt);
          switch (opt)
          {
          case 1:
          printf("Enter the Data : \n");
          scanf("%d",&)
               break;
          
          default:
               break;
          }
     }
}