//GIVEN PREORDER AND INORDER TO GET THE TREE 
#include<stdio.h>
#include<stdlib.h>
#define max 6
struct node
{
   int data;
   struct node*left;
   struct node*right;
};
struct node* create(int item)
{
   struct node* temp=(struct node*)malloc(sizeof(struct node));
   temp->data=item;
   temp->left=NULL;
   temp->right=NULL;
   return(temp);
}
int search(int ino[max],int s,int e,int ele)
{
   for(int i=s;i<=e;i++)
   {
      if(ino[i]==ele)
      {
         return(i);
      }
   }
}
struct node*Tree(int pre[max],int ino[max],int s,int e)
{
   if(s>e)
   {
      return(NULL);
   }
  static int c=0;
   int ele=pre[c];
   c++;
   struct node*root=create(ele);
   if(s==e)
   {
      return(root);
   }
   /*if(s==e)
   {
     return(root);
   }
  /* if(c<pos)
   {
      root->left=Tree()
      s=0;
      e=pos;
   }
   else if(c>0 && c<max)
   {
      s=pos;
      e=max;
   }*/
   int pos=search(ino,s,e,ele);
   root->left=Tree(pre,ino,s,pos-1);
   root->right=Tree(pre,ino,pos+1,e);
   return(root);
}
void inorder(struct node*root)
{
   if(root==NULL)
   {
      return;
   }
   printf("  %d  ",root->data);
   inorder(root->left);
   inorder(root->right);
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
int main()
{
  /* printf("Enter the Number of nodes of the Tree: \n");
   scanf("%d",&max);*/
   int pre[]={5,6,8,9,7,10,11};
   int ino[]={8,6,9,5,10,7,11};
   /*printf("\nEnter the PREORDER TRAVERSAL REPRESENTATION : \n");
   for(int i=0;i<max;i++)
   {
      scanf("%d",&pre[i]);
   }
   printf("\nEnter the INORDER TRAVERSAL REPRESENTATION : \n");
   for(int i=0;i<max;i++)
   {
      scanf("%d",&ino[i]);
   }

   printf("--- DISPLAYING THE TRAVERSALS : \n");
    printf("\nThe PREORDER TRAVERSAL REPRESENTATION : \n");
   for(int i=0;i<max;i++)
   {
      printf("%d",pre[i]);
   }
   printf("\nThe INORDER TRAVERSAL REPRESENTATION : \n");
   for(int i=0;i<max;i++)
   {
      printf("%d",ino[i]);
   }*/
  struct node*r;
  r=Tree(pre,ino,0,6);
  printf("--- AFTER CREATING TREE FINDING THE TRAVERSALS : --- \n");
  printf("\nPREORDER : \n");
  preorder(r);
  printf("\nINORDER : \n");
  inorder(r);
  printf("\nPOSTORDER : \n");
  postorder(r);
return(0);
}
