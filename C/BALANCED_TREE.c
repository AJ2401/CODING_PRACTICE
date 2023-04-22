#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define true 1
#define false 0
struct node
{
   int data;
   struct node*right;
   struct node*left;
};
struct node*Create(int item)
{
   struct node*temp=(struct node*)malloc(sizeof(struct node));
   temp->right=NULL;
   temp->left=NULL;
   temp->data=item;
}

int Height(struct node*root)
{
   if(root==NULL)
   {
      return -1;
   }
   int LH=Height(root->left);
   int RH=Height(root->right);
   if(RH>LH)
   {
      return(RH+1);
   }
   else if(LH==RH)
   {
      return(LH+1);
   }
   else
   {
      return(LH+1);
  }
}
bool Bal(struct node*root)
{
   if(root==NULL)
   {
      return(true);
   }
   if(Bal(root->left)==false)
   {
      return(false);
   }
   if(Bal(root->right)==false)
   {
      return(false);
   }
   int LH=Height(root->left);
   int RH=Height(root->right);
   int d=LH-RH;
   if(d<=1)
   {
      return(true);
   }
   else
   {
      return(false);
   }
}
void main()
{
   struct node*root=Create(1);
   //BALANCED TREE EXAMPLE
   root->left=Create(2);
   root->right=Create(3);
   root->left->left=Create(4);
   root->left->right=Create(5);
   root->right->left=Create(6);
   root->right->right=Create(7);
   root->left->left->left=Create(8);
   root->left->left->right=Create(9);
   //UNBALANCED TREE EXAMPLE
  /* root->left=Create(2);
   root->left->left=Create(3);
   root->left->left->right=Create(4);
   root->right=Create(5);*/
   if(Bal(root)==true)
   {
      printf("Tree is Balanced !! \n");
   }
   else
   {
      printf("Tree is not Balanced   !! \n");
   }
}