#include<stdio.h>
#include<stdlib.h>
struct node
{
   struct node*right;
   struct node*left;
   int data;
};
void add(struct node**root,int item,int side)
{
   struct node*temp=(struct node*)malloc(sizeof(struct node));
   temp->left=NULL;
   temp->right=NULL;
   if(side==1)
   {
      if(root==NULL)
      {
         *root=temp;
      }
      else
      {
         struct node*t=*root;
         while(t->left!=NULL)
         {
            t=t->left;
         }
         t->left=temp;
      }
   }
   else if(side==2)
   {
      if(root==NULL)
      {
         *root=temp;
      }
      else
      {
         struct node*t=*root;
         while(t->right!=NULL)
         {
            t=t->right;
         }
         t->right=temp;
      }
   }
}
void display(struct node*root)
{
   printf("\nRight Side : \n");
   while(root->right!=NULL)
   {
      printf("  %d   ",root->data);
      root=root->right;
   }
   printf("\nLeft Side : \n");
   while(root->left!=NULL)
   {
      printf("  %d  ",root->data);
      root=root->left;
   }
}
void Post_order(struct node*root)
{

}
void Pre_order(struct node*root)
{

}
void In_order(struct node*root)
{

}
void main()
{
   struct node*root=NULL;
   int ele,item,o,op,opt,n=1;
   while(n>0)
   {
      printf("Choose your option : \n1)Add\n2)Traverse\n3)Display\n");
      scanf("%d",&opt);
      switch(opt)
      {
         case 1:
         printf("Choose the Side : \n1)LEFT\n2)RIGHT\n");
         scanf("%d",&op);
         switch (op)
         {
         case 1:
         printf("Enter the Element : \n");
         scanf("%d",&item);
         add(&root,item,1);
            break;
         case 2:
         printf("Enter the Element : \n");
         scanf("%d",&item);
         add(&root,item,2);
            break;
         default:
            break;
         }
         break;
         case 2:
         printf("Choose the Travesal Option :\n1)PostOrder\n2)PreOrder\n3)InOrder\n");
         scanf("%d",&o);
         switch (o)
         {
         case 1:
         printf("The PostOrder Traversal is : \n");
         Post_order(root);
         break;
         case 2:
         printf("The  PreOrder Traversal is : \n");
         Pre_order(root);
         break;
         case 3:
         printf("The InOrder Traversal is : \n");
         In_order(root);
         break;
         }
            break;
         case 3:
         printf("The Tree is : \n");
         display(root);
         break;

         default:
            break;
         }
      }
   }
}