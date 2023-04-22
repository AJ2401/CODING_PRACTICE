// adding Node at Certain Position in Circular Linked List
#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node* link;
    int data;
};
void display(struct node* tail)
{
    struct node* temp=tail->link;
    do
    {
     printf("%d\t",temp->data);
     temp=temp->link;
    }
    while(temp!=tail->link);
}
struct node* add_Empty(int data)
{
struct node* temp=malloc(sizeof(struct node));
temp->data=data;
temp->link=temp;
return(temp);
};
struct node* Add_end(struct node* tail,int data)
{
    struct node* tempo=malloc(sizeof(struct node));
    tempo->data=data;
    tempo->link=NULL;
    tempo->link=tail->link;
    tail->link=tempo;
    tail=tail->link;
    return(tail);
};
struct node* Create_List(struct node* tail)
{
   int data,n;
   printf("Enter the Number of Nodes to be Created: \n");
   scanf("%d",&n);
   if(n==0)
   {
       return(tail);
   }
   printf("Enter the Data for First Node: \n");
   scanf("%d",&data);
   tail=add_Empty(data);
   for(int i=1;i<n;i++)
   {
       printf("Enter the data for : %d ",i+1);
       scanf("%d",&data);
       tail=Add_end(tail,data);
   }
   return(tail);

};
struct node* del_Cer(struct node* tail,int pos)
{
    struct node* temp=tail->link;
    if(tail==NULL)
    {
        return tail;
    }
    if(tail->link==tail)
    {
        free(tail);
        tail=NULL;
      return tail;
    }
    while(pos>2)
    {
     temp=temp->link;
     pos--;
    }
    struct node* tempo=temp->link;
    temp->link=tempo->link;
    if(tempo==tail)
    {
        tail=temp;
        free(tempo);
        tempo=NULL;
        return(tail);
    }

    return(tail);
};
int main()
{
    struct node* tail;
    tail=Create_List(tail);
    display(tail);
    tail=del_Cer(tail,3);
    printf("\n After Deletion at Certain Position \n");
    display(tail);
}


