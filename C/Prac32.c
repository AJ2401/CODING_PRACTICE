#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node* pre;
    struct node* next;
    int data;
};
void display(struct node* tail)
{
    if(tail==NULL)
    {
        printf("\n NO Elements in the List\n");
    }
    else
        {
            struct node* temp=tail->next;
            do
            {
              printf("%d\t",temp->data);
              temp=temp->next;
            }
            while(temp!=tail->next);
        }
        printf("\n");

}
struct node* add_Empty(int data)
{
    struct node* temp=malloc(sizeof(struct node));
    temp->pre=temp;
    temp->next=temp;
    temp->data=data;
    return(temp);
};
struct node* add_beg(struct node* tail,int data)
{
    struct node* tempo=add_Empty(data);
    if(tail==NULL)
    {
        return(tempo);
    }
    else
    {
        struct node* temp=tail->next;
        tempo->pre=tail;
        tempo->next=temp;
        temp->pre=tempo;
        tail->next=tempo;
        return(tail);
    }
};
int main()
{
    struct node* tail=NULL;
    tail=add_Empty(478);
    tail=add_beg(tail,78);
    display(tail);
}
