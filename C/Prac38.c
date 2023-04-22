#include<stdio.h>
#include<stdlib.h>
struct node
{
    float coeff;
    int expo;
    struct node* link;
};
struct node* Create(struct node* head)
{
 int i,n;
 float coeff;
 int expo;
 printf("\n Enter the Number of Terms you Want\n");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
     printf("\nEnter the Coefficient for this term %d",i+1);
     scanf("%1.f",&coeff);
     printf("\nEnter the Exponent for this term %d",i+1);
     scanf("%d",&expo);
     head=Insert(head,coeff,expo);
 }
 return(head);
}
struct node*Insert(struct node* head,float co,int ex)
{
    struct node* temp;
    struct node* new_node=malloc(sizeof(struct node));
    new_node->coeff=co;
    new_node->expo=ex;
    new_node->=NULL;
    if(head==NULL ||ex>head->expo)
    {
        new_node->link=head;
        head=new_node;
    }
    else
    {
        temp=head;
    while(temp->link!=NULL && temp->link->expo>ex)
    {
      temp=temp->link;
      new_node->link=temp->link;
      temp->link=new_node;
    }
    }
    return(head);
}
void display(struct node* head)
{
    if(head=NULL)
    {
        printf("\n Polynomial Dosen't Exists\n");
    }
    else{
    struct node* temp=head;
    while(temp!=NULL)
    {
        printf("%0.1 f x^%d",temp->coeff,temp->expo);
        temp=temp->link;
        if(temp!=NULL)
        {
         printf(" + ");
        }
        else
        {
            printf("\n");
        }
    }
    }
}
int main()
{
    struct node* head=NULL;
    printf("\n Enter the Polynomial \n");
    head=Create(head);
    display(head);
    return 0;
}
