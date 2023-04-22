#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* link;
};
void display(struct node* ptr)
{
    struct node* temp=ptr;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->link;
    }

}
void add_beg(struct node* head,int data)
{
 struct node* ptr=malloc(sizeof(struct node));
 ptr->data=data
}
int main()
{
    struct node* head=malloc(sizeof(struct node));
    head->data=458;
    head->link=NULL;

    struct node* head2=malloc(sizeof(struct node));
    head2->data=18;
    head2->link=NULL;
    head->link=head2;

    struct node* head3=malloc(sizeof(struct node));
    head3->data=8;
    head3->link=NULL;
    head2->link=head3;

    struct node* head4=malloc(sizeof(struct node));
    head4->data=71;
    head4->link=NULL;
    head3->link=head4;

    struct node* head5=malloc(sizeof(struct node));
    head5->data=10;
    head5->link=NULL;
    head4->link=head5;

    struct node* head6=malloc(sizeof(struct node));
    head6->data=122;
    head6->link=NULL;
    head5->link=head6;

    struct node* head7=malloc(sizeof(struct node));
    head7->data=101;
    head7->link=NULL;
    head6->link=head7;

    display(head);
}
