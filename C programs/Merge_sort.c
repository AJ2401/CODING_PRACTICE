#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int max;
void merge(char arr[],int l,int m,int u)
{
    int l1=m-l;
    int l2=u-m+1;

    char a1[l1];
    char a2[l2];

    for(int i=0;i<l1;i++)
    {
        a1[i]=arr[l+i];
    }
    for(int i=0;i<l2;i++)
    {
        a2[i]=arr[i+m+1];
    }
    int p=0,q=0,k=l;
    while(p<l1 && q<l2)
    {
        if(a1[p]>a2[q])
        {
            arr[k]=a2[q];
            q++;
            k++;
        }
        else
        {
            arr[k]=a1[p];
            p++;
            k++;
        }
    }
    while(p<l1)
    {
        arr[k]=a1[p];
        p++;
        k++;
    }
    while(q<l2)
    {
        arr[k]=a2[q];
        q++;
        k++;
    }
}
void Merge_Sort(char arr[],int l,int u)
{
    if(l<u)
    {
        int m=(l+u)/2;
        Merge_Sort(arr,l,m);
        Merge_Sort(arr,m+1,u);
        merge(arr,l,m,u);
    }
}
void display(char arr[])
{
    printf("The Array is : \n");
    for(int i=0;i<max;i++)
    {
        printf("  %c  ",arr[i]);
    }
    printf("\n");
}
void main()
{
    char arr[max];
    printf("Enter the Size of the Array :\n");
    scanf("%d",&max);
    for(int i=0;i<max;i++)
    {
        printf("Enter the Item %d ",i);
        scanf("%s",&arr[i]);
    }
    printf("\n\n");
    display(arr);
    printf("The Sorted Array is \n");
    Merge_Sort(arr,0,max-1);
    display(arr);
}
