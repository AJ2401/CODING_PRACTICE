// Getting Shortest Distance Between Two Nodes
#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node*right;
   struct node*left;
};
struct node*create(int item)
{
   struct node*temp=(struct node*)malloc(sizeof(struct node));
   temp->data=item;
   temp->left=NULL;
   temp->right=NULL;
   return(temp);
}
int finddis(struct node*root,int num,int dis)
{
   if(root==NULL)
   {
      return(-1);
   }
   if(root->data==num)
   {
      return(dis);
   }
   int l=finddis(root->left,num,dis+1);
   if(l!=-1)
   {
      return(l);
   }
   else{
   int r=finddis(root->right,num,dis+1);
   if(r!=-1)
   {
   return(r);
   }
   }
}
struct node*smallAnc(struct node*root,int n1,int n2)
{
   if(root==NULL)
   {
      return NULL;
   }
   if(root->data==n1 || root->data==n2)
   {
      return(root);
   }
struct node*l=smallAnc(root->left,n1,n2);
struct node*r=smallAnc(root->right,n1,n2);
 if(l!=NULL && r!=NULL)
   {
      return(root);
   }
   if(l==NULL && r==NULL)
   {
      return(NULL);
   }
   if(l!=NULL)
   {
      return(smallAnc(root->left,n1,n2));
   }
   else{
      return(smallAnc(root->right,n1,n2));
   }
}
int smalldis(struct node*root,int n1,int n2)
{
   struct node*temp=smallAnc(root,n1,n2);
   int l1=finddis(temp,n1,0);
   int l2=finddis(temp,n2,0);
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
   struct node*root=create(1);
   root->left=create(2);
   root->right=create(3);
   root->left->left=create(4);
   root->left->right=create(5);
   root->right->left=create(6);
   root->right->left->left=create(7);
   root->right->right=create(8);
   printf("The PreOrder of Tree is : \n");
   preorder(root);
   printf("Enter the Two Nodes Value so that we can get the Least Comman Ancesstor and Shortest Distance Between them \n");
   printf("First Node :\t");
   scanf("%d",&n1);
   printf("Second Node :\t");
   scanf("%d",&n2);
   printf("\nSmallest Ancesstor is : \n");
   struct node*anc=smallAnc(root,n1,n2);
   printf("%d\n",anc->data);
   int dis=smalldis(root,n1,n2);
   printf("Shortest Distance Between %d and %d is %d \n",n1,n2,dis);
}