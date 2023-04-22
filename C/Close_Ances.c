//Getting Closest Ancesstor in the Tree Node 
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
   temp->right=NULL;
   temp->left=NULL;
}
struct node*comAnc(struct node*root,int n1,int n2)
{
   if(root==NULL)
   {
      return NULL;
   }
   if(root->data==n1 || root->data==n2)
   {
      return(root);
   }
   struct node*l=comAnc(root->left,n1,n2);
   struct node*r=comAnc(root->right,n1,n2);
   if(l==NULL && r==NULL)
   {
      return(NULL);
   }
   if(l!=NULL && r!=NULL)
   {
      return(root);
   }
   if(l!=NULL)
   {
      return(comAnc(root->left,n1,n2));
   }
   else
   {
      return(comAnc(root->right,n1,n2));
   }
}
int distance(struct node*root,int num,int dis)
{
   if(root==NULL)
   {
      return(-1);
   }
   if(root->data==num)
   {
      return(dis);
   }
   int l=distance(root,num,dis+1);
   if(l!=-1)
   {
      return(dis);
   }
   else
   {
      int r=distance(root,num,dis+1);
      if(r!=-1)
      {
         return(dis);
      }
      else
      {
         return(-1);
      }
   }
}
int shortDis(struct node*root,int n1,int n2)
{
   struct node*temp=comAnc(root,n1,n2);
   int l1=distance(temp,n1,0);
   int l2=distance(temp,n2,0); 
   return(l1+l2);
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
   int n1,n2;
   struct node*root=Create(1);
   root->left=Create(2);
   root->right=Create(3);
   root->left->left=Create(4);
   root->left->right=Create(5);
   root->right->left=Create(6);
   root->right->right=Create(7);
   root->left->left->left=Create(8);
   root->right->left->right=Create(9);
   printf("PreOrder of the Tree is  :\n");
   preorder(root);
   printf("\n");
   printf("Enter Two Nodes Data Part to get the Comman Ancesstor between :  \n");
   printf("Element 1: \n");
   scanf("%d",&n1);
   printf("Element 2: \n");
   scanf("%d",&n2);
    printf("\n");
   struct node*LAC=comAnc(root,n1,n2);
   printf("The Comman Anccesstor of %d and %d is :  %d\n",n1,n2,LAC->data);
    printf("\n");      
   int dis=shortDis(root,n1,n2);
   printf("The Shortest Distance between %d and %d is : %d\n",n1,n2,dis);
    printf("\n");
}