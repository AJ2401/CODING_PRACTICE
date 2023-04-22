//Replacing the Node's data by it's sum of it's branches 
#include<stdlib.h>
#include<stdio.h>
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
void postorder(struct node*root)
{
   if(root==NULL)
   {
      return;
   }
   postorder(root->left);
   postorder(root->right);
   printf("  %d  ",root->data);
}
void Replace(struct node*root)
{
   if(root==NULL)
   {
      return;
   }
   Replace(root->left);
   Replace(root->right);

   if(root->left!=NULL)
   {
      root->data+=root->left->data;
   }
   if(root->right!=NULL)
   {
      root->data+=root->right->data;
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
   root->left->left->left=Create(8);
   root->left->left->right=Create(9);
   root->right->left->left=Create(10);
   root->right->left->right=Create(11);
   printf("\nThe POSTORDER is : \n");
   postorder(root);
   printf("\nThe PREORDER is : \n");
   preorder(root);
   printf("\nThe INORDER is : \n");
   inorder(root);

   Replace(root);

   printf("\n\n\t\t*** After Some Changes ***\t\t\n\n");
   printf("\nThe POSTORDER is : \n");
   postorder(root);
   printf("\nThe PREORDER is : \n");
   preorder(root);
   printf("\nThe INORDER is : \n");
   inorder(root);
}