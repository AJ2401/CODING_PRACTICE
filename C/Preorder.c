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
void Inorder(struct node*root)
{
   if(root==NULL)
   {
      return;
   }
   //int item=root->data;
   Inorder(root->left);
   printf("  %d  ",root->data);
   Inorder(root->right);
}
/*void display(struct node*root)
{
   struct node*t=root->right;
   struct node*t1=root->left;
   printf("\n LEFT SIDE VIEW \n");
   while(t1!=NULL)
   {
      printf("  %d  ",t1->data);
      t1=t1->left;
   }
   printf("\n RIGHT SIDE VIEW \n");
   while(t->right!=NULL)
   {
      printf("  %d  ",t->data);
      t=t->right;
   }
}*/
void main()
{
   struct node*root=create(5);
   root->left=create(6);
   root->right=create(7);
   root->left->left=create(8);
   root->left->right=create(9);
   root->right->left=create(10);
   root->right->right=create(11);
  /* printf("\nTHE TREE ELEMENTS ARE  : \n");
   display(root);*/
   printf("\nPREORDER TRANSVERSAL : \n");
   preorder(root);
   printf("\nPOSTORDER TRANSVERSAL : \n");
   postorder(root);
   printf("\nINORDER TRANSVERSAL : \n");
   Inorder(root);
}