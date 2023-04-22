#include<stdlib.h>
#include<stdio.h>
int Merge(int Arr[],int l,int m,int u)
{
   int c1=0;
   int n1=(m-l+1);
   int n2=(u-m);
   int a[n1];
   int b[n2];
   for(int i=0;i<n1;i++)
   {
      a[i]=Arr[l+i];
   }
   for(int i=0;i<n2;i++)
   {
      b[i]=Arr[m+i+1];
   }
   int p=0,j=0,k=l;
   while(p<n1 && j<n2)
   {
      if(a[p]<=b[j])
      {
         Arr[k]=a[p];
         k++;p++;
      }
      else
      {
         c1=c1+n1-p;
         Arr[k]=b[j];
         k++;j++;
      }
   }
   while(p<n1)
   {
      Arr[k]=a[p];
      k++;p++;
   }
   while(j<n2)
   {
      Arr[k]=b[j];
      k++;j++;
   }
   return c1;
}
int CM(int Arr[],int l,int u)
{
   int c=0;
   if(l<u)
   {
     int m=(l+u)/2;
     c=c+CM(Arr,l,m);
     c=c+CM(Arr,m+1,u);
     c=c+Merge(Arr,l,m,u);
   }
   return c;
}
int main()
{
   int len;
   printf("Enter the Length of the Array \n");
   scanf("%d",&len);
   int Arr[len];
   printf("Enter the Elements of the Array : \n");
   for(int i=0;i<len;i++)
   {
      printf("Element %d : ",i+1);
      scanf("%d",&Arr[i]);
   }
   int count=0;
   count=CM(Arr,0,len-1);
   printf("The Sorted Array is : \n");
   for(int i=0;i<len;i++)
   {
      printf(" %d  ",Arr[i]);
   }
   printf("\nThe Number of Inversions Are : %d ",count);
   return 0;
}