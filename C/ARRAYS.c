#include<stdio.h>
#define max 8
void insert(int* arr,int pos, int num);
void del(int* arr,int pos);
void reverse(int* arr);
void search(int* arr,int num);
void display(int* arr);
int main()
{
    int arr[max];
    insert(arr,1,26);insert(arr,2,17);insert(arr,3,1);insert(arr,3,10);insert(arr,4,21);insert(arr,5,37);insert(arr,6,61);insert(arr,7,14);insert(arr,8,16);
    printf("\nThe Array is \n");
    display(arr);
    printf("\n Before Deletion \n");
    display(arr);
    printf("\n After Deletion \n");
    del(arr,3);
    display(arr);
    printf("\n Reversing the Array \n");
    reverse(arr);
    display(arr);
    int num;
    printf("\n Enter the Number to be Searched \n");
    scanf("%d",&num);
    search(arr,num);
}
void insert(int* arr,int pos,int num)
{
    int i;
    for(i=max-1;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[i]=num;
}
void del(int* arr,int pos)
{
    arr[pos]=0;
    for(int i=pos;i<max;i++)
    {
        arr[i]=arr[i+1];
    }
}
void reverse(int* arr)
{
    for(int i=0;i<max/2;i++)
    {
        int temp=arr[max-1-i];
        arr[max-1-i]=arr[i];
        arr[i]=temp;
    }

}
void search(int* arr,int num)
{
    for(int i=0;i<max-1;i++)
    {
        if(arr[i]==num)
        {
            printf("The is %d is present in the array at %d position ",num,i);
        }
    }
}
void display(int * arr)
{
    for(int i=0;i<max;i++)
    {
        printf("%d\t",arr[i]);
    }
}
