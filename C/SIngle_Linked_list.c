#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*link;
};
void add_beg(struct node**,int data);
void add_cert(struct node*,int data,int pos);
void add_end(struct node**,int data);
void display(struct node*);
void del_data(struct node**,int ele);
void del_pos(struct node**,int pos);
int count(struct node*);

int main()
{
    struct node*head=NULL;
    int n;
    add_beg(&head,12);
    add_beg(&head,89);
    printf("The list after adding at begining : ");
    display(head);
    printf("\nEnter the Number of the nodes to be Added : ");
    scanf("%d",&n);
    int ele[n];
    for(int i=0; i<n; i++)
    {
        printf("Enter the Element : ");
        scanf("%d",&ele[i]);
        add_end(&head,ele[i]);
    }
    printf("The List is : ");
    display(head);
    printf("The Number of nodes are :%d\n",count(head));
    add_cert(head,14,2);
    add_cert(head,225,4);
    printf("The List after Adding elements (at certain position)\n");
    display(head);
    printf("The Number of nodes are :%d\n",count(head));
    int num,pos;
    printf("Enter the Data to be deleted in the List : \n");
    scanf("%d",&num);
    del_data(&head,num);
    printf("The List after Deletion is : \n");
    display(head);
    /*printf("The Number of nodes are :%d",count(head));
    printf("Enter the Position to be deleted in the List : \n");
    scanf("%d",&pos);
    del_pos(&head,pos);
    printf("The List after Deletion is : \n");
    display(head);*/
    printf("The Number of nodes are :%d\n",count(head));
return 0;
}
void add_beg(struct node**head,int data)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->link=*head;
    *head=temp;
}
void add_end(struct node**head,int data)
{
    if(*head==NULL)
    {
        struct node* temp=(struct node*)malloc(sizeof(struct node));
        temp->data=data;
        temp->link=NULL;
        *head=temp;
    }
    else
    {
        struct node *temp,*tempo;
        temp=*head;
        tempo=(struct node*)malloc(sizeof(struct node));
        while((temp->link)!=NULL)
        {
            temp=temp->link;
        }
        tempo->data=data;
        tempo->link=NULL;
        temp->link=tempo;
    }
}
void add_cert(struct node*head,int data,int pos)
{
    struct node*temp=head;
    struct node*tempo=(struct node*)malloc(sizeof(struct node));
    for(int i=0;i<pos;i++)
    {
        temp=temp->link;
    }
     tempo->data=data;
     tempo->link=temp->link;
     temp->link=tempo;
}
/*void del_pos(struct node**head,int pos)
{
    struct node*temp,*tempo;
    temp=*head;
    for(int i=0;i<pos;i++)
    {
        temp=temp->link;
    }
    tempo->link=temp->link;
    free(temp);
}*/
void del_data(struct node**head,int ele)
{
    struct node *temp,*tempo;
    temp=*head;
    while((temp->link) != NULL)
    {
        if((temp->data)==ele)
        {
            if(temp==(*head))
            {
                *head=temp->link;
            }
            else
           {
                tempo->link=temp->link;
            }
            free(temp);
        }
        else
        {
            tempo=temp;
            temp=temp->link;
        }
    }

}
void display(struct node*head)
{
    while(head->link!=NULL)
    {
        printf(" %d ",head->data);
        head=head->link;
    }
    printf(" %d ",head->data);
}
int count(struct node*head)
{
    int c=0;
    while(head->link!=NULL)
    {
        ++c;
        head=head->link;
    }
    return(c);
}
