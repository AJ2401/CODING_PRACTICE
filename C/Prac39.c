#include<stdio.h>
#include<stdlib.h>
struct node
{
 struct node* link;
 int data;
};
struct node* Create(struct node* head,int num)
{
    while(num!=0)
    {
        head=insert(head,num%10);
        num=num/10;
    }
    return(head);
}
struct node* insert(struct node* head,int n)
{
    struct node* tempo=malloc(sizeof(struct node));
    tempo->data=n;
    tempo->link=NULL;
    tempo->link=head;
    head=tempo;
    return(head);
}
void display(struct node* head)
{
    struct node* temp=head;
    if(head==NULL)
    {
        printf("NO NUMBER !!");
    }
   else{
    while(temp->link!=NULL)
    {
        printf("%d -> ",temp->data);
        temp=temp->link;
    }
   }
}
int main()
{
    int a,b;
    printf("\n Enter the Numbers to be Added\n");
    scanf("%d %d",&a,&b);
    printf("\nThe First Number Respresentation through Linked List \n");
    struct node*  head1=NULL;
    head1=Create(head1,a);
    display(head1);
    printf("\nThe Second Number Respresentation through Linked List \n");
    struct node*  head2=NULL;
    head2=Create(head2,b);
    display(head2);
    return 0;
}

