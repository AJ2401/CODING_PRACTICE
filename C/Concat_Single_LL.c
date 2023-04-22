#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node*link;
    int data;
};
struct node* add_end(struct node*head,int item)
{
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    struct node*t=head;
    if(head==NULL)
    {
        temp->data=item;
        temp->link=NULL;
        head=temp;
    }

    else
    {
        temp->data=item;
        temp->link=head;
        head=temp;
    }
    return(head);
}
void display(struct node*head)
{
    int c=0;
    struct node*t=head;
    while(t!=NULL)
    {
        printf("%d -> ",t->data);
        t=t->link;
        c++;
    }
    printf("\nThe Number of Nodes are %d",c);
}
struct node* concat(struct node*head1,struct node*head2)
{
    if(head1==NULL)
    {
        return head2;
    }
    else
    {
        struct node*t=head1;
        while(t->link!=NULL)
        {
            t=t->link;
        }
        t->link=head2;
        return(head1);
    }
}
int main()
{
    struct node*head1=NULL;
    struct node*head2=NULL;
    struct node*head=NULL;
    int n,n1;
    printf("\nEnter the Number of Nodes to be Entered in List 1 :\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the Elements  \n");
    for(int i=0; i<n; i++)
    {
        printf("\nEnter Element of Node %d : \n",i+1);
        scanf("%d",&arr[i]);
        head1=add_end(head1,arr[i]);
    }
    printf("The List 1 is : \n");
    display(head1);

    printf("Enter the Number of Nodes to be Entered in List 2 :\n");
    scanf("%d",&n1);
    printf("Enter the Elements  \n");
    int arr1[n1];
    for(int i=0; i<n1; i++)
    {
        printf("Enter Element of Node %d : ",i+1);
        scanf("%d",&arr1[i]);
        head2=add_end(head2,arr1[i]);
    }
    printf("The List 2 is : \n");
    display(head2);

    head1=concat(head1,head2);
    printf("After Concating both the Lists : \n");
    display(head1);
}
