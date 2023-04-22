// GIVEN POSTORDER AND INORDER TO GET BINARY TREE
#include<stdio.h>
#include<stdlib.h>
#define max 6
struct node
{
   int data;
   struct node*right;
   struct node*left;
};
struct node* create(int item)
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
   printf(" %d ",root->data);
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
   printf(" %d ",root->data);
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
int search(int in[max],int s,int e,int ele)
{
   for(int i=s;i<=e;i++)
   {
      if(in[i]==ele)
      {
         return(i);
      }
   }
}
struct node*tree(int pos[max],int in[max],int s,int e)
{
   if(s>e)
   {
      return(NULL);
   }
   static int c=max;
   int item=pos[c];
   c--;
   struct node*root=create(item);
   if(s==e)
   {
      return (root);
   }
   int idx=search(in,s,e,item);
   root->left=tree(pos,in,s,idx-1);
   root->right=tree(pos,in,idx+1,e);
   return(root);
}
void main()
{
   int post[]={8,9,6,10,11,7,5};
   int in[]={8,6,9,5,10,7,11};
   struct node*root=tree(post,in,0,max);
   printf("AFTER CREATING TREE THE DIFFERENT TRAVERSALS ARE :  \n");
   printf("\nPREORDER :\n");
   preorder(root);
   printf("\nPOSTORDER : \n");
   postorder(root);
   printf("\nINORDER : \n");
   inorder(root);
}