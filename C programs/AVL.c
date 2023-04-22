//AVL TREE IMPLEMENTATION
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int height;
    int data;
    struct node*right;
    struct node*left;
};
int height(struct node*root)
{
    if(root==NULL)
    {
        return(0);
    }
    int LH=height(root->left);
    int RH=height(root->right);
    if(LH>RH)
    {
        return(LH+1);
    }
    else if(RH>LH)
    {
        return(RH+1);
    }
}
int balance(struct node*root)
{
    int RH=height(root->right);
    int LH=height(root->left);
    int bal=LH-RH;
    return(bal);
}
struct node*rightrotate(struct node*root)
{
    struct node*t1=root->right;
    struct node*t2=t1->left;

    t1->right=root;
    root->left=t2;

    t1->height=height(t1);
    root->height=height(root);
}
struct node*leftrotate(struct node*root)
{
    struct node*t1=root->left;
    struct node*t2=t1->right;

    root->left=t2;
    t1->right=root;
    t1->height=height(t1);
    root->height=height(root);
}
struct node*Create(struct node*root,int item)
{
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    temp->data=item;
    temp->left=NULL;
    temp->right=NULL;
    struct node*t=root;
    struct node*R=root;
    if(R==NULL)
    {
        root=temp;
    }
    if(item>R->data)
    {
        while(t->right!=NULL)
        {
            t=t->right;
        }
        t->right=temp;
    }
    else if(R->data>item)
    {
        while(t->left!=NULL)
        {
            t=t->left;
        }
        t->left=temp;
    }
    /*  else{
           printf("Cant insert Duplicates ");
           return(R);
      }*/
    temp->height=height(R);
    int bal=balance(R);

    if(bal<-1 && item>R->data)
    {
        return(rightrotate(R));
    }
    else if(bal<-1 && item<R->data)
    {
        R->right=leftrotate(R);
        return(rightrotate(R));
    }
    else if(bal>1 && item<R->data)
    {
        return(leftrotate(R));
    }
    else if(bal>1 && item>R->data)
    {
        R->left=rightrotate(R);
        return(leftrotate(R));
    }
    return(root);
}
static int c=0;
void preorder(struct node*root)
{
    //static int c=0;
    if(root==NULL)
    {
        //printf("The Number of NODES are %d \n",c);
        return;
    }
    c++;
    printf("  %c  ",root->data);
    preorder(root->left);
    preorder(root->right);
}
void main()
{
    //struct node*root=NULL;
    int n,opt,i=0;
    struct node*root=NULL;
    printf("Enter the Number of Iterations : \n");
    scanf("%d",&n);
    int item;
    while(n>0)
    {
        printf("Choice your option :\n1)ADD\n2)Preorder\n");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("Enter the Char Item : \n");
            scanf("%d",&item);
            root=Create(root,item);
            i++;
            break;
        case 2:
            printf("The Required AVL TREE is : \n");
            preorder(root);
            printf("The Number of nodes are : %d ",c);
            break;
        }
        n--;

    }
}
