#include<stdio.h>
#include<stdlib.h>
void merge(int *Arr,int mid,int L,int U)
{
   int n1=mid-L+1;
   int n2=U-mid;
   int a1[n1];
   int a2[n2];
   for(int i=0;i<n1;i++)
   {
      a1[i]=Arr[i+L];
   }
   for(int i=0;i<n2;i++)
   {
      a2[i]=Arr[i+mid+1];
   }
   int p=0;
   int j=0;
   int k=L;
   while(p<n1 && j<n2)
   {
      if(a1[p]<a2[j])
      {
         Arr[k]=a1[p];
         p++;k++;
      }
      else
      {
         Arr[k]=a2[j];
         k++;j++;
      }
   }
   while(p<n1)
   {
      Arr[k]=a1[p];
      p++;k++;
   }
   while(j<n2)
   {
      Arr[k]=a2[j];
      j++;k++;
   }
}
void Merge(int *Arr,int L,int U)
{
   int mid=(L+U)/2;
   if(L<U)
   {
      Merge(Arr,L,mid);
      Merge(Arr,mid+1,U);
      merge(Arr,mid,L,U);
   }
}
int main()
{
   int n;
   printf("Enter the Value of N : \n");
   scanf("%d",&n);
   int Arr[n];
   printf("Enter the Elements : \n");
   for(int i=0;i<n;i++)
   {
      scanf("%d",&Arr[i]);
   }
   int u=n-1;
   Merge(Arr,0,u);
   printf("Sorting Using Merge Sort  : \n");
   for(int i=0;i<n;i++)
   {
      printf(" %d ",Arr[i]);
   }
   return 0;

}
