//Deletion between Nodes
#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node* next;
    struct node* pre;
    int data;
};
struct node* add_empty(int data)
{
    struct node* temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->pre=NULL;
    temp->next=NULL;
    temp->next=temp;
    temp->pre=temp;
    return(temp);
};
struct node* add_end(struct node* tail,int data)
{
    struct node* temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
    temp->next=tail->next;
    tail->next=temp;
    tail=tail->next;
    return(tail);
};
struct node* del_Cer(struct node* tail,int pos)
{
    struct node* temp=tail->next;
    while(pos>1)
    {
        temp=temp->next;
        pos--;
    }
    struct node* temp2=temp->pre;
    temp2->next=temp->next;
    temp->next->pre=temp2;
    free(temp);

    /*if(temp==tail)
    {
        tail=temp2;
    }*/
    return(tail);

};
void display(struct node* tail)
{
    struct node* temp=tail->next;
    do
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    while(temp!=tail->next);
}
int main()
{
    struct node* tail=NULL;
                 tail=add_empty(154);
                 tail=add_end(tail,78);
                 tail=add_end(tail,18);
                 tail=add_end(tail,10);
                 tail=add_end(tail,15);
                 tail=add_end(tail,879);
                 tail=add_end(tail,787);
                 tail=add_end(tail,120);
                 tail=add_end(tail,142);
                 tail=add_end(tail,166);
                 display(tail);
                 printf("\nList After Deletion is:\n");
                 tail=del_Cer(tail,4);
                 display(tail);
                 return 0;

}
