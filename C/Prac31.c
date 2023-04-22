#include<stdio.h>
#include<stdlib.h>
struct node
{
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
int Search_ele(struct node* tail,int element)
{
    struct node* temp;
    int index=0;
    if(tail==NULL)
    {
        return(-2);
    }
    temp=tail->link;
    do
    {
        if(temp->data=element)
           {return(index);}
        else
            {temp=temp->link;
             index++;
            }
    }
    while(temp!=tail->link);
    return(-1);
}
int main()
{
    int element;
    struct node* tail=NULL;
    tail=add_empty(789);
    tail=add_end(tail,45);
    tail=add_end(tail,47);
    tail=add_end(tail,18);
    tail=add_end(tail,89);
    tail=add_end(tail,5);
    display(tail);
    count_ele(tail);
    printf("\nEnter the to be Searched ? \n");
    scanf("%d",&element);
    int index=Search_ele(tail,element);
    if(index== -1)
    {
     printf("\n The Number is Not Found \n");
    }
    else if(index== -2)
    {
        printf("\nThe List is Empty\n");
    }
    else
    {
        printf("The Element %d is found at %d position\n",element,index);
    }
}
