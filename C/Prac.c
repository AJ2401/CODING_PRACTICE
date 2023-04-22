#include<Stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
    struct node* pre;
};
void display(struct node* ptr)
{
    struct node* temp=ptr;
    while(temp!=NULL)
    {
        printf("%d\t",&temp);
        temp=temp->next;
    }
}
struct node* add_empty(struct node* head,int data)
{
    struct node* temp=malloc(sizeof(struct node));
    temp->pre=NULL;
    temp->next=NULL;
    temp->data=data;
    temp=head;
     while(temp!=NULL)
     {
         temp->next=temp;
         temp->pre=temp;
         return(head);
     }
};
struct node* del(struct node* head,int pos)
{
    struct node* temp=head;
    struct node* tempo=NULL;
   /* if(pos==1)
    {
        head=delfirst(head);
        return(head);
    }
    while(pos>1)
    {
        temp=temp->next;
        pos--;
    }*/
   /* if(temp->next==NULL)
    {
        head=dellast(head);
    }*/

        tempo=temp->pre;
        tempo->next=temp->next;
        temp->next->pre=tempo;
       free(temp);
       temp=NULL;

    return(head);
};
struct node* Add_end(struct node* head,int data)
{
    struct node* temp,tempo;
    temp=malloc(sizeof(struct node));
    temp->next=NULL;
    temp->pre=NULL;
    temp->data=data;
    temp=head;
    return(head);
};

int main()
{

    struct node* head=NULL;
    head=add_empty(head,48);
    head=Add_end(head,78);
    head=Add_end(head,456);
    head=Add_end(head,10);
    display(head);
    head=del(head,2);
    printf("\n AFTER DELETION IS :\n");
    display(head);
    return(0);
}
