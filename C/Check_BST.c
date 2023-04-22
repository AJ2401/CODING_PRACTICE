// Here We have to check Whether the Given Tree is BST or Not ??
#include<stdio.h>
#include<stdlib.h>
#define true 1
#define flase 0
#include<stdbool.h>
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
   return(temp);
}
struct node*BST(struct node*root,int item)
{
   if(root==NULL)
   {return(Create(item));}
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
bool Check(struct node*root)
{
   struct node*t1=root;
   struct node*t2=root;
   if(root==NULL)
   {
      return(false);
   }
   while(root!=NULL)
   {
      t1=t1->right;
      t2=t2->left;
      if(t1->data>root->data && t2->data<root->data)
      {
         bool c1=Check(root->right);
         bool c2=Check(root->left);
         return(true);
      }
   }
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
   struct node*root1=NULL;
   int n,item1,item2;
   printf("\nEnter the Numeber of Roots : \n");
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
      printf("Element %d:\t",i+1);
      scanf("%d",&item1);
      root1=BST(root1,item1);
   }
   printf("\n---TREE-ONE Preorder ---\n");
   preorder(root1);
   printf("\n---TREE-ONE INORDER ---\n");
   inorder(root1);
   printf("\nChecking Wehther the Tree is BINARY or NOT  ?? \n");
   if(Check(root1)==true){
      printf("It is a Binary Search Tree !! \n");
   }
   else
   {
      printf("\nIt is not a Binary Search Tree :( \n");
   }
   printf("\n\n");

   struct node*root2=Create(1);
   root2->left=Create(2);
   root2->right=Create(3);
   root2->left->left=Create(4);
   root2->left->right=Create(5);
   root2->right->left=Create(6);
   root2->right->right=Create(7);
   root2->left->left->left=Create(8);
   root2->left->left->right=Create(9);
   printf("\n---TREE-TWO Preorder ---\n");
   preorder(root2);
   printf("\n---TREE-TWO INORDER ---\n");
   inorder(root2);
   printf("\nChecking Wehther the Tree is BINARY or NOT  ?? \n");
   if(Check(root2)==true){
      printf("It is a Binary Search Tree !! \n");
   }
   else
   {
      printf("\nIt is not a Binary Search Tree :( \n");
   }
   printf("\n\n");
}
