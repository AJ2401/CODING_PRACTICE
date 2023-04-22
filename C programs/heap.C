//MAX heap
#include<stdio.h>
#include<stdlib.h>
#define max 100
void swap(int arr[],int p1,int p2)
{
     int temp=arr[p1];
     arr[p1]=arr[p2];
     arr[p2]=temp;
}
void heapify(int arr[],int size,int src)
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
          swap(arr,large,src);
          heapify(arr,size,large);
     }
}
void display(int arr[],int size)
{
     int c=0;
     for(int i=0;i<size;i++)
     {
          printf("  %d  ",arr[i]);
          c++;
     }
     printf("Number of Items are : %d ",c);
}
int main()
{
     int n=1,opt,i=0;
     int arr[max];
     while(n>0)
     {
      printf("Choose your option :\n1Add Element\n2)Convert Into Heap \n3)Display \n4)EXIT\n\n");
      scanf("%d",&opt);
      switch(opt)
      {
           case 1:
           printf("Enter the Element :\n");
           scanf("%d",&arr[i]);
           i++;
           break;
           case 2:
           printf("\nConverting into Heap \n");
           for(int j=i/2-1;j>=0;j--){
           heapify(arr,i,j);
           }
           break;
           case 3:
           printf("The Heap is : \n");
           display(arr,i);
           break;
           case 4:
               n=0;
           break;
      }
     }
     return(0);
}
