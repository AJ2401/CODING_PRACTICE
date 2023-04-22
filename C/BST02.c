//VERY VERY IMPORTANT ***
//O(log n) --> Time Complex
//Search and Delete in a Binary Search Tree 
//Here if the Data Element (which shld be Deleted) is greater than root then we will search it in right else in the Left Side 
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
struct node*BST(struct node*root,int item)
{
   if(root==NULL)
   {
     return(Create(item));
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
void Search(struct node*root,int item,int iter)
{
   if(root==NULL)
   {
       printf("\nThe Element Dosen't Exists ! :( \n");
      return;
   }
   else if(item>root->data)
   {
      Search(root->right,item,iter+1);
   }
   else if(item==root->data)
   {
      printf("\n%d Element is the %d Element !! \n",item,iter);
   }
   
   else
   {
      Search(root->left,item,iter+1);
   }
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
   int n,item;
   printf("\nEnter the Number  of Nodes to be Entered : \n");
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
      printf("Node %d:\t",i+1);
      scanf("%d",&item);
      root=BST(root,item);
   }
   printf("\nINORDER TRAVERSAL  :\n");//We get Sorted Array
   inorder(root);
   printf("\nPREORDER TRAVERSAL : \n");
   preorder(root);
   printf("\nEnter the Search Item : \n");
   scanf("%d",&item);
   Search(root,item,0);
}
