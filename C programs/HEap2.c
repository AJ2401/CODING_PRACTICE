//MIN HEAP
#include<stdio.h>
#include<stdlib.h>
#define max 100
int size=0;
void swap(int arr[],int p1,int p2){
    int temp=arr[p1];
    arr[p1]=arr[p2];
    arr[p2]=temp;
}
void insert(int arr[],int size,int val)
{
    size++;
    arr[size]=val;
    int idx=size;
    while(idx>1)
    {
        int parent=idx/2;
        if(arr[parent]>arr[size])
        {
            swap(arr,idx,size);
            idx=parent;
        }
    }
}
int del_pos(int arr[],int size,int pos){
    swap(arr,pos,size);
    int temp=arr[size];
    size--;
    heapify(arr,size,pos);
    return(temp);
}
int del_d(int arr[],int size,int val)
{
    int i;
    for(i=0;i<size;i++)
    {
        if(arr[i]==val)
        {
            swap(arr,i,size);
            size--;
            heapify(arr,size,i);
            break;
        }
    }
    return(arr[i]);
}
void heapify(int arr[],int s,int src)
{
    int small=src;
    int l=src*2+1;
    int r=2*src+2;
    if(l<=size && arr[small]>arr[l])
    {
        small=l;
    }
    if(r<=size && arr[small]>arr[r])
    {
        small=r;
    }
    if(small!=src)
    {
        swap(arr,src,small);

        heapify(arr,s,small);
    }
}
void heapsort(int arr[],int size)
{
    for(int i=size-1;i>=0;i--)
    {
        swap(arr,i,0);
        heapify(arr,i,0);
    }
}
void display(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("  %d  ",arr[i]);
    }
}
void main()
{
    int n=1,opt,item,arr[max],pos,val,d;
    while(n>0)
    {
        printf("choose your option\n0)ADD \n1)Insert \n2)Delete_VAL\n3)Delete_POS\n4)Display\n5)Heapify\n6)Heapsort\n7)EXIT\n");
        scanf("%d",&opt);
        switch(opt)
        {
        case 0:
             printf("Enter the Item\n");
            scanf("%d",&arr[size]);
            size++;
            break;
        case 1:
            printf("Enter the Item\n");
            scanf("%d",&item);
            insert(arr,size,item);
            size++;
            break;
        case 2:
            printf("Enter the Position : \n");
            scanf("%d",&pos);
            d=del_pos(arr,size,pos);
            printf("The %d is Deleted \n",d);
            break;
        case 3:
            printf("Enter the Item : \n");
            scanf("%d",&item);
            d=del_d(arr,size,item);
            break;
        case 4:
            printf("The Heap is : \n");
            display(arr,size);
            break;
        case 5:
            printf("Heapifying ....\n");
            for(int i=size/2-1;i>=0;i--)
            {
                heapify(arr,size,i);
            }
            break;
        case 6:
            heapsort(arr,size);
            printf("The Heap sort is : \n");
            display(arr,size);
            break;
        }
    }
}
