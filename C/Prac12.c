#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* link;
};
void display(struct node* ptr)
{
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->link;
    }
}
struct node* reverse(struct node* head)
{
 struct node* pre=NULL;
 struct node* next=NULL;
 while(head!=NULL)
 {
     next=head->link;
     head->link=pre;
     pre=head;
     head=next;
 }
 head=pre;
 return(head);
}
int main()
{
    struct node* head=malloc(sizeof(struct node));
    head->data=157;
    head->link=NULL;


    struct node* head1=malloc(sizeof(struct node));
    head1->data=1;
    head1->link=NULL;
    head->link=head1;

    struct node* head2=malloc(sizeof(struct node));
    head2->data=17;
    head2->link=NULL;
    head1->link=head2;

    struct node* head3=malloc(sizeof(struct node));
    head3->data=7;
    head3->link=NULL;
    head2->link=head3;

    struct node* head4=malloc(sizeof(struct node));
    head4->data=28;
    head4->link=NULL;
    head3->link=head4;

    struct node* head5=malloc(sizeof(struct node));
    head5->data=57;
    head5->link=NULL;
    head4->link=head5;

    struct node* head6=malloc(sizeof(struct node));
    head6->data=87;
    head6->link=NULL;
    head5->link=head6;
    display(head);
    printf("\n The Reverse Linked List is :\n ");
    head=reverse(head);
    display(head);
}
