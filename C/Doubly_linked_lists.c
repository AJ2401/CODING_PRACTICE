#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node*next,*pre;
    int data;
};
void add_beg(struct node**head,int item)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=item;
    temp->next=NULL;
    temp->pre=NULL;
}
void add_end(struct node**head,int item)
{
    struct node*t=*head;
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    if(*head==NULL)
    {
        temp->data=item;
        temp->next=NULL;
        temp->pre=NULL;
    }
    if(t->next==NULL)
    {
        temp->data=item;
        temp->next=NULL;
        temp->pre=t;
        t->next=temp;
    }
    while(t!=NULL)
    {
        t=t->next;
    }
    temp->next=NULL;
    temp->data=item;
    temp->pre=t;
    t->pre=temp;
}
void add_cert(struct node*head,int item,int pos)
{
    for(int i=0; i<pos; i++)
    {
        head=head->next;
    }
    struct node*temp=(struct node*)malloc(sizeof(struct node*));
    head->next->pre=temp;
    temp->data=item;
    temp->next=head->next;
    temp->pre=head;
    head->pre=temp;
}
void del_end(struct node**head)
{
    struct node*t=*head;
    while(t->next==NULL)
    {
        t=t->next;
    }
    t->pre->next=t->next;
    t->next->pre=t->pre;
    free(t);
}
void del_cert(struct node*head,int loc)
{
    struct node*t=head;
    for(int i=0; i<loc; i++)
    {
        t=t->next;
    }
    t->next->pre=t->pre;
    t->pre->next=t->next;
    head=t->next;
    free(t);
}
void del_beg(struct node**head)
{
    struct node*t=*head;
    t->next->pre=NULL;
    t->next=NULL;
    free(t);
}
void display(struct node*head)
{
    int c=0;
    while(head->next!=NULL)
    {
        printf(" %d ",head->data);
        head=head->next;
        c++;
    }
    printf("List have %d number of nodes : \n",c);
}
void search(struct node*head,int ele)
{
    while(head->next!=NULL)
    {
        head=head->next;
        if(ele==head->data)
        {
            printf("%d is present in the List \n",ele);
        }
    }
}
int main()
{
    struct node*head=NULL;
    int c,num,loc,i;
    printf("The Number of Iteration to be Done : ");
    scanf("%d",&i);
    for(int j=0; j<i; j++)
    {
        printf("Enter the option to Perform the Operation on the Linked List :\n1)Add Element Beginging\n2)Add Element at End\n3)Add_Element at Certain Position\n4)Deletion of Element At Front \n5)Deletion of the Element at End\n6)Deletion of the Element at Certion Place\n7)Display\n8)Search for the Element\n");
        scanf("%d",&c);
        switch(c)
        {
        case 1:
            printf("Enter the Element at Begining  : ");
            scanf("%d",&num);
            add_beg(&head,num);
            break;
        case 2:
            printf("Enter the Element at End : ");
            scanf("%d",&num);
            add_end(&head,num);
             break;
        case 3:
            printf("Enter the Element at Certain Position :");
            printf("Element :" );
            scanf("%d",&num);
            printf("Location : ");
            scanf("%d",&loc);
            add_cert(head,num,loc);
             break;
        case 4:
            printf("The Element Deletion at Front : ");
            del_beg(&head);
             break;
        case 5:
            printf("The Element Deletion at End : ");
            del_end(&head);
             break;
        case 6:
            printf("The Element Deletion at Certain Postion : ");
            scanf("%d",&loc);
            del_cert(head,loc);
             break;
        case 7:
            printf("The Linked List is : ");
            display(head);
             break;
        case 8:
            printf("Enter the Element to be Searched :  ");
            scanf("%d",&num);
            search(head,num);
             break;
        }
    }
}
