//HEAP SORT
#include<stdio.h>
#include<stdlib.h>
#define max 100
int size;
void swap(int arr[],int p1,int p2)
{
    int temp=arr[p1];
    arr[p1]=arr[p2];
    arr[p2]=temp;
}
void heapify(int arr[],int s,int src)
{
    int large=src;
    int l=2*src+1;
    int r=2*src+2;
    if(l<=size && arr[large]<arr[l])
    {
        large=l;
    }
    if(r<=size && arr[large]<arr[r])
    {
        large=r;
    }
    if(large!=src)
    {
        swap(arr,src,large);
        heapify(arr,s,large);
    }
}
void insert(int arr[],int size,int item)
{
    size++;
    arr[size]=item;
    int idx=size;
    while(idx>1)
    {
        int parent=idx/2;
        if(arr[idx]>arr[parent])
        {
            swap(arr,idx,parent);
            idx=parent;
        }
        else{
            return;
        }
    }
}
int del(int arr[],int size,int pos)
{
    arr[size]=arr[pos];
    int t=arr[size];
    size--;
    heapify(arr,size,pos);
    return(t);
}
int del_d(int arr[],int size,int item)
{
    int i,t;
    for(i=0;i<size;i++)
    {
        if(item==arr[i])
        {
            swap(arr,i,size);
            t=arr[size];
            size--;
            break;
        }
    }
    heapify(arr,size,i);
    return(t);
}
void heapsort(int arr[],int size)
{
    /*for(int i=size/2-1;i>=0;i--)
    {
        heapify(arr,size,i);
    }*/
    for(int i=size;i>=0;i--)
    {
        swap(arr,i,0);
        heapify(arr,i,0);
    }
}
void display(int arr[],int size)
{
    int c=0;
    for(int i=0;i<size;i++)
    {
        printf(" %d ",arr[i]);
        c++;
    }
    printf("The Number of items %d \n",c+1);
}
void main()
{
    int n=1,arr[max],opt,pos,item,d;
    while(n>0)
    {
        printf("Choose your option :\n1)ADD\n2)Insert \n3)Delete_Data\n4)Delete_Pos\n5)Heapify\n6)Heapsort\n7)Display\n8)Exit\n\n");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            printf("Enter the Item: \n");
            scanf("%d",&arr[size]);
            size++;
            break;
        case 2:
            printf("Enter the Item (Inserting)\n");
            scanf("%d",&item);
            insert(arr,size,item);
            break;
        case 3:
            printf("Enter the Item to be Deleted : \n");
            scanf("%d",&item);
            d=del_d(arr,size,item);
            printf("%d is Deleted !",d);
            break;
        case 4:
            printf("Enter the Position to be Deleted : \n");
            scanf("%d",&pos);
            d=del(arr,size,pos);
            printf("%d is Deleted ! \n",d);
            break;
        case 5:
            printf("Heapifying the Heap .. .. \n");
            for(int j=size/2-1;j>=0;j--){
            heapify(arr,size,j);
            }
            break;
        case 6:
            printf("The Heapsort is : \n");
            heapsort(arr,size);
            display(arr,size);
            break;
        case 7:
            printf("The heap is :\n\n");
            display(arr,size);
            break;
        case 8:
            n=0;
            break;

        }
    }
}
