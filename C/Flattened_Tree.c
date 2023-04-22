//Flatting the  Tree into Linked List where Left Link will be NULL and have only right links 
#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node*left;
   struct node*right;
};
struct node*Create(int item)
{
   struct node*temp=(struct node*)malloc(sizeof(struct node));
   temp->data=item;
   temp->left=NULL;
   temp->right=NULL;
}
void flat(struct node*root)
{
   if(root==NULL || (root->left==NULL && root->right==NULL))
   {
      return;
   }
   if(root->left!=NULL)
   {
      flat(root->left);

      struct node*temp=root->right;
      root->right=root->left;
      root->left=NULL;

      struct node*t=root->right;
      while(t!=NULL)
      {
         t=t->right;
      }
      t->right=temp;
   }
   flat(root->right);
}
void preorder(struct node*root)
{
   if(root==NULL)
   {
      return;
   }
   printf("  %d  ",root->data);
   preorder(root->left);
   preorder(root->right); 
}
void display(struct node*root)
{
   printf("TREE ->(INTO) LINKED LIST : \n ");
   struct node*t=root->right;
   while(t!=NULL)
   {
      printf("  %d  ",t->data);
      t=t->right;
   }
}
void main()
{
   struct node*root=Create(1);
   root->left=Create(2);
   root->right=Create(3);
   root->left->left=Create(4);
   root->left->right=Create(5);
   root->right->left=Create(6);
   root->right->right=Create(7);
   root->left->left->right=Create(8);
   root->right->left->right=Create(9);
   printf("The PreOrder of the Tree is : \n");
   preorder(root);
   flat(root);
  // preorder(root);
   display(root);
}