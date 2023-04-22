#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#define maxi 10
int max;
void swap(char*arr,int p1,int p2)
{
    char temp[maxi]=arr[p1];
    arr[p1]=arr[p2];
    arr[p2]=temp[maxi];
}
int partition(char*arr,int l,int h)
{
    int pi=h;
    int i=l-1;
    for(int j=0;j<h;j++){
        if(arr[pi]>arr[j]){
                i++;
        swap(arr,i,j);
        }
    }
    swap(arr,i+1,h);
    return(i+1);
}
void Sort(char*arr,int l,int h)
{
    if(l<h){
    int pi=partition(arr,l,h);

    Sort(arr,l,pi-1);
    Sort(arr,pi+1,h);
    }
}
void display(char*arr)
{
    printf("The Array is : \n");
    for(int i=0;i<strlen(arr);i++)
    {
        printf("  %c ",arr[i]);
    }
    printf("\n");
}
void main()
{
    char*arr;
    printf("Enter the Size of the Array :\n");
    scanf("%d",&max);
    arr=(char*)malloc(max*sizeof(char));
    for(int i=0;i<max;i++)
    {
        printf("Enter the Item %d ",i);
        scanf("%s",&arr[i]);
    }
    printf("\n\n");
    display(arr);
    printf("The Sorted Array is \n");
    Sort(arr,0,max-1);
    display(arr);
}
