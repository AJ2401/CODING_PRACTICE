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
int Height(struct node*root)
{
   if(root==NULL)
   {
      return 0;
   }
   int LH=Height(root->left);
   int RH=Height(root->right);
   if(LH>RH)
   {
      return (LH+1);
   }
   else if(RH==LH)
   {
      return (RH+1);
   }
   else
   {
      return (RH+1);
   }

}
int max(int LD,int RD,int C)
{
   if(LD>RD)
   {
      if(LD>C)
      {
         return(LD);
      }
      else
      {
         return(C);
      }
   }
   else
   {
      if(RD>C)
      {
         return(RD);
      }
      else
      {
         return(C);
      }
   }
}
int Diameter(struct node*root)
{
   if(root==NULL)
   {
      return 0;
   }
   int LD=Height(root->left);
   int RD=Height(root->right);
   int C=LD+RD+1;
   int m=max(LD,RD,C);
   Diameter(root->left);
   Diameter(root->right);
 return(m);
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
   root->left->right->left=Create(9);
   root->right->left->left=Create(10);
   root->right->right->left=Create(11);
   root->left->right->left->left=Create(12);
   int H=Height(root);
   printf("The Hight of the Tree is : %d\n",H);
   int d=Diameter(root);
   printf("The Diameter between Nodes of the Tree : %d\n",d);
}