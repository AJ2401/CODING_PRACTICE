#include<stdio.h>
#include<stdlib.h>
struct node{
struct node* link;
int data;
};
void display(struct node* tail)
{
    struct node* temp=tail;
    while(temp->link!=tail)
    {
        printf("%d\t",temp->data);
        temp=temp->link;
    }
}
struct node* add_empty(int data)
{
 struct node* temp=malloc(sizeof(struct node));
 temp->data=data;
 temp->link=NULL;
 temp->link=temp;
 return(temp);
};
struct node* add_end(struct node* tail,int data)
{
    struct node* tempo=malloc(sizeof(struct node));
    tempo->link=NULL;
    tempo->data=data;
    tempo->link=tail->link;
    tail->link=tempo;
    tail=tail->link;
    return(tail);
};
void count_ele(struct node* tail)
{
    struct node* temp=tail->link;
    int count=0;
    while(temp!=tail)
    {
        temp=temp->link;
        count++;
    }
    //count++;
    printf("\nThe Nodes Present are: %d \n",count);
}
int main()
{
    struct node* tail=NULL;
    tail=add_empty(789);
    tail=add_end(tail,45);
     tail=add_end(tail,47);
      tail=add_end(tail,18);
      tail=add_end(tail,89);
      tail=add_end(tail,5);
    display(tail);
    count_ele(tail);
}
