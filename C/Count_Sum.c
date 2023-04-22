#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node*right;
   struct node*left;
};
struct node* Create(int item)
{
   struct node*temp=(struct node*)malloc(sizeof(struct node));
   temp->data=item;
   temp->right=NULL;
   temp->left=NULL;
   return(temp);
}
int Count(struct node*root)
{
   if(root==NULL)
   {
      return 0;
   }
   int c=Count(root->left)+Count(root->right)+1;
   return(c);
}
int Sum(struct node*root)
{
   if(root==NULL)
   {
      int s=root->data;
      return s;
   }
   int sum=Sum(root->right)+Sum(root->left)+root->data;
   return(sum);
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

   int Result=Sum(root);
   int Num=Count(root);
   printf("The Number of Nodes are : %d\n",Num);
   printf("The Sum of Nodes are : %d\n",Sum);
}
