//Binary Search TREE 
#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node*left;
   struct node*right;
};
struct node*create(int item)
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
        return(create(item));
   }
   if(root->data<item)
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
void main()
{
   struct node*root=NULL;
   int Arr[]={5,4,3,7,6,1,2,45,78,11};
   for(int i=0;i<10;i++)
   {
      root=BST(root,Arr[i]);
   }
   printf("The INORDER of the TREE is : \n");
   //We will get a Sorted Array as we use inorder Traversal
   inorder(root);
}