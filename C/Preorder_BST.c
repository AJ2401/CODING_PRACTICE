// here we will construct Binary Tree using Preorder Array 
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
      else if(item>root->data)
      {
         root->right=BST(root->right,item);
      }
      else
      {
         root->left=BST(root->left,item);
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
void main()
{
   struct node*root=NULL;
  /* This code is for Dynamic Program
  int n;
   printf("Enter the Number of Nodes : \n");
   scanf("%d",&n);
   int Arr[n];
   printf("Enter the Preorder of the Tree : \n");
   for(int i=0;i<n;i++)
   {
      printf("Element %d : \t",i+1);
      scanf("%d",&Arr[i]);
   }
   */
  int Arr[]={10,2,1,13,11};
  for(int i=0;i<5;i++)
  {
   root=BST(root,Arr[i]);
  }
  printf("The Inorder of Tree is : \n");
  inorder(root);
  printf("\nThe Preorder of Tree is : \n");
  preorder(root);
}