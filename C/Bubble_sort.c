// Insertion Sorting of an Array .
#include<stdio.h>
#include<stdlib.h>
void AS_sort(int Arr[],int len)
{
   for(int i=0;i<len-1;i++)
   {
      for(int j=0;j<len-1-i;j++)
      {
         if(Arr[j]>Arr[j+1])
         {
            swap(&Arr[j],&Arr[j+1]);
         }
      }
   }
   printf("\nThe Sorted Array ( Asscending Order ) is : \n");
   display(Arr,len);
}
void DS_sort(int Arr[],int len)
{
   for(int i=0;i<len-1;i++)
   {
      for(int j=0;j<len-i-1;j++)
      {
         if(Arr[j+1]>Arr[j])
         {
            swap(&Arr[j+1],&Arr[j]);
         }
      }
   }
   printf("\nThe Sorted Array ( Descending Order ) is : \n");
   display(Arr,len);
}
void display(int Arr[],int len)
{
   for(int i=0;i<len;i++)
   {
      printf(" %d ",Arr[i]);
   }
}
void swap(int*a,int*b)
{
   int temp;
   temp=*a;
   *a=*b;
   *b=temp;
}
int main()
{
   int len;
   printf("\nEnter the Length of the Array : \n");
   scanf("%d",&len);
   int Arr[len];
   printf("\nEnter the Array Elements :\n");
   for(int i=0;i<len;i++)
   {
      printf("\nElement %d : ",i+1);
      scanf("%d",&Arr[i]);
   }
   printf("\nThe Unsorted Array is : \n");
   display(Arr,len);
   AS_sort(Arr,len);
   DS_sort(Arr,len);
   return 0;
}
