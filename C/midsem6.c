#include<stdio.h>
#include "bin_search.h"
void display(int* arr,int len)
{
    for(int i=0; i<len; i++)
    {
        printf("%d , ",arr[i]);
    }
}
int main()
{
    int pos,item,n;
    printf("\nEnter the Number of Elements in the Array :\n");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the Array Elements :\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nThe Array is : \n");
    display(arr,n);
    printf("\nSorting the Array : \n");
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            int temp;
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\nThe Sorted array is : \n");
    display(arr,n);
    printf("\nEnter the item to be searched : \n");
    scanf("%d",&item);
    pos=bin_search(0,n-1,item,arr);
    if(pos!=-1)
    {
        printf("\nThe %d Item is Found at %d place \n",item,pos);
    }
    else
    {
        printf("NOT FOUND");
    }
}
