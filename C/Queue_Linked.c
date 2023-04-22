#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*link;
};
struct node*front;
struct node*rear;

void insert(int item)
{
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("Overflow Situation");
    }
    else
    {
        if(front==NULL)
        {
            temp->data=item;
            front =temp;
            rear=temp;
            front->link=NULL;
            rear->link=NULL;

        }
        else{
        temp->data=item;
        temp->link=NULL;
        rear->link=temp;
        rear=temp;
    }
    }

}
int del()
{
    struct node*temp;
    if(front==NULL)
    {
        printf("Unnderflow Situation");
    }
    else
    {
        int n=front->data;
        temp=front;
        front=front->link;
        free(temp);
        return(n);
    }
}
void display()
{
    struct node*temp=front;
    if(front==NULL)
    {
        printf("The List is Empty ");
    }
    else
    {
        int c=0;
        while(temp->link!=NULL)
        {
            printf("%d -> ",temp->data);
            temp=temp->link;
            c++;
        }
        printf(" %d ",temp->data);
        printf("Number of Nodes in the List is %d\n",c);
    }
}
int main()
{
    int num,n,opt,d;
    printf("Enter the Number of Iteration to be Done : \n");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        printf("\n --- MENU --- \n");
        printf("Choose One of these : \n1)Insert\n2)Delete\n3)Display\n");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("Enter Any Element \n");
            scanf("%d",&num);
            insert(num);
            break;
        case 2:
            d=del();
            printf("The Element Deleted is %d\n",d);
            break;
        case 3:
            display();
            break;
        }
    }
}

