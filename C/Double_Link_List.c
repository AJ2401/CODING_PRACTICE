#include<stdio.h>
#include<stdlib.h>
struct dnode
{
    int data;
    struct dnode* llink;
    struct dnode* rlink;
};
void add_beg(struct dnode**head,int data)
{
    struct dnode*temp=(struct dnode*)malloc(sizeof(struct dnode));
    temp->data=data;
    temp->llink=NULL;
    temp->rlink=(*head);
    (*head)->llink=temp;
    *head=temp;
}
void add_cert(struct dnode**head,int loc,int data)
{
    struct dnode *temp,*tempo;
    tempo=*head;
    for(int i=0; i<loc; i++)
    {
        tempo=tempo->rlink;
    }
    temp=(struct dnode*)malloc(sizeof(struct dnode));
    temp->data=data;
    temp->rlink=tempo->rlink->llink;
    tempo->rlink=temp;
    temp->llink=tempo;
}
void add_end(struct dnode**head,int data)
{
    struct dnode *temp,*tempo;
    tempo=*head;
    if(*head==NULL)
    {
        temp=(struct dnode*)malloc(sizeof(struct dnode));
        temp->data=data;
        temp->llink=NULL;
        temp->rlink=NULL;
    }
    else{
    while(tempo->rlink!=NULL)
    {
        tempo=tempo->rlink;
    }
    temp=(struct dnode*)malloc(sizeof(struct dnode));
    temp->llink=(*head);
    temp->rlink=NULL;
    (*head)->rlink=temp;
    *head=temp;
}

}
void display(struct dnode*head)
{
    while(head->rlink!=NULL)
    {
        printf(" %d ",head->data);
        head=head->rlink;
    }
}
int count(struct dnode*head)
{
    int count=0;
    while(head->rlink!=NULL)
    {
        count++;
        head=head->rlink;
    }
    return(count);
}
void del(struct dnode**head,int ele)
{
    struct dnode*tempo=*head;
    while(tempo!=NULL)
    {
        if(ele==tempo->data)
        {
            if(*head==tempo)
            {
                *head=(*head)->rlink;
                (*head)->llink=NULL;
            }
            else
            {
                if(tempo->rlink==NULL)
                {
                    tempo->llink->rlink=NULL;
                }
                else
                {
                    tempo->llink->rlink=tempo->rlink;
                    tempo->rlink->llink=tempo->llink;
                }
                free(tempo);
            }
        }
        else
        {
            tempo=tempo->rlink;
        }
    }
}
int main()
{
    struct dnode*head=NULL;
    add_beg(&head,98);
    int n;
    printf("Enter any Number : ");
    scanf("%d",&n);
    int arr[n],ele;
    for(int i=0; i<n; i++)
    {
        printf("Enter any Element : ");
        scanf("%d",&arr[i]);
        add_end(&head,arr[i]);
    }
    printf("The List is : \n");
    display(head);
    printf("The %d nodes are there in the List \n",count(head));
    add_beg(&head,64);
    printf("The List After adding nodes in the Begining : \n");
    display(head);
    printf("The %d nodes are there in the List \n",count(head));
    add_cert(&head,56,3);
    add_cert(&head,89,6);
    printf("The List is after Adding nodes in certain Locations : \n");
    display(head);
    printf("The %d nodes are there in the List \n",count(head));
    printf("Enter the Element Value (for Deletion) : \n");
    scanf("%d",&ele);
    del(&head,ele);
    printf("Enter the Element Value (for Deletion) : \n");
    scanf("%d",&ele);
    del(&head,ele);
    printf("The List after Deletion of some Elements : \n");
    display(head);
    printf("The %d nodes are there in the List \n",count(head));
}
