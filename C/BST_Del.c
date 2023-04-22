//Deleting a node fro BST In Three Cases 1)Left only one Child 2)right only one Child 3) Root have both left & right Children 
#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node*right;
   struct node*left;
};
struct node*Create(int item)
{
   struct node*temp=(struct node*)malloc(sizeof(struct node));
   temp->data=item;
   temp->left=NULL;
   temp->right=NULL;
   return(temp);
}
struct node*BST(struct node*root,int item)
{
   if(root==NULL)
   {
      return(Create(item));
   }
   else if(root->data>item)
   {
      root->left=BST(root->left,item);
   }
   else
   {
      root->right=BST(root->right,item);
   }
   return(root);
}
void inorder(struct node*root)
{
   if(root==NULL)
   {
      return;
   }
   inorder(root->left);
   printf("  %d  ",root->data);
   inorder(root->right);
}
struct node*inorderSuccess(struct node*root)
{
   struct node*t=root;
   while(t!=NULL && t->left!=NULL)
   {
      t=t->left;
   }
   return(t);
}
struct node*del(struct node*root,int item)
{
   if(root==NULL)
   {
      printf("ITEM DOSEN'T EXISTS \n");
      return;
   }
   if(item<root->data)
   {
      root->left=del(root->left,item);
   }
   else if(item>root->data)
   {
      root->right=del(root->right,item);
   }
   else
   {
      if(root->left==NULL)
      {
         struct node*temp=root->right;
         free(root->right);
         return(temp);
      }
      if(root->right==NULL)
      {
         struct node*temp=root->left;
         free(root->left);
         return(temp);
      }
      else
      {
         struct node*temp=inorderSuccess(root->right);
         root->data=temp->data;
         root->right=del(root->right,temp->data);
      }
       return(root);
   }
}
void main()
{
   int n,item;
   struct node*root=NULL;
   printf("\nEnter the Number of nodes : \n");
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
      printf("Node %d :\t",i+1);
      scanf("%d",&item);
      root=BST(root,item);
   }
   printf("\nThe Tree's Inorder is : \n");
   inorder(root);
   printf("\nEnter the  Element to be  Deleted :\n");
   scanf("%d",&item);
   root=del(root,item);
   printf("\nAFTER DELTION : \n");
   inorder(root);
}