#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*link;
};
struct node* add_end(struct node*head,int item)
{
    struct node*temp=malloc(sizeof(struct node));
    struct node*t=head;
    if(head==NULL)
    {
        temp->data=item;
        temp->link=NULL;
        head=temp;
        return(head);
    }
    else
    {
        temp->data=item;
        temp->link=head;
        head=temp;
         return(head);
    }
}
struct node* del_end(struct node*head)
{
    struct node*t=head;
    if(head==NULL)
    {
        printf("The List is Empty ");
    }
    else if(t->link==NULL)
    {
        free(head);
        head=NULL;
    }
    else
    {
        struct node*temp;
        while(t->link!=NULL)
        {
            temp=t;
            t=t->link;
        }
        temp->link=NULL;
        free(t);
        t=NULL;
    }
    return(head);
}
void display(struct node*head)
{
    struct node*t=head;
     int count=0;
    while(t!=NULL)
    {
        printf("%d ",t->data);
        t=t->link;
        count++;
    }
    printf("The Number of Nodes are %d",count);
}
void search(struct node*head,int ele)
{
    struct node*t=head;
    while (t!=NULL)
    {
        if(ele=t->data)
        {
            printf("%d Element is Found ! ",ele);
            break;
        }
        else
        {
            t=t->link;
        }
    }
}
int main()
{
    struct node*head=NULL;
    int n,opt,c;
    printf("Enter the Number of Iterations to be done : ");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        printf("Choice Any option : \n1)Add Element : \n2)Deletion of Element \n3)Display \n4)Search Element in List \n");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("Enter the Element : ");
            scanf("%d",&c);
            head=add_end(head,c);
            break;
        case 2:
            del_end(head);
            break;
        case 3:
            display(head);
            break;
        case 4:
            printf("Enter the Element to be Searched : ");
            scanf("%d",&c);
            search(head,c);
            break;
        }
    }
    return 0;
}
