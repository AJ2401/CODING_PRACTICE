#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*llink,*rlink;
};
void create(struct node**root,int item)
{
    struct node*t=*root;
    if(!t)
    {
        struct node*temp=(struct node*)malloc(sizeof(struct node));
        temp->data=item;
        temp->rlink=NULL;
        temp->llink=NULL;
        *root=temp;
        return;
    }
    else if(item > (t->data))
    {
        create(&(t->llink),item);
    }
    else if(item < (t->data))
    {
        create(&(t->rlink),item);
    }

}
void display(struct node*root)
{
    if(root)
    {
        display(root->llink);
        printf(" %d  ",root->data);
        display(root->rlink);
    }
}
int main()
{
    struct node*root=NULL;
    int n,item;
    printf("Enter the Number of iterations to be Done : ");
    scanf("%d",&n);
    while(n>0)
    {
        printf("Enter the Element : \n");
        scanf("%d",&item);
        create(&root,item);
        n--;
    }
    printf("The Tree is : \n");
    display(root);
    return 0;
}
