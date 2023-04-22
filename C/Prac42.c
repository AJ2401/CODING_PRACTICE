 #include<stdio.h>
 #define max 8
 void display(int*arr)
 {
     for(int i=0;i<max;i++)
     {
         printf("%d , ",arr[i]);
     }
 }
 void insert(int*arr,int num,int n)
 {
     for(int i=max-1;i>=n;i++)
     {
         arr[i]=arr[i-1];
     }
     arr[n]=num;
 }
 void del(int*arr,int n)
 {
     arr[n]=0;
     for(int i=n;i<max;i++)
     {
         arr[i]=arr[i+1];
     }
 }
 void revs(int*arr)
 {
     for(int i=0;i<max/2;i++)
     {
         int temp;
         temp=arr[i];
         arr[i]=arr[max-i-1];
         arr[max-i-1]=temp;
     }
 }
void search(int*arr,int n)
{
    for(int i=0;i<max;i++)
    {
        if(arr[i]==n)
        {
            printf("%d Element is Found ! ",n);
        }
    }
}
 int main()
 {
     int arr[max];
     int num,n1,n2,n3;
     printf("Enter the Array Elements : ");
     for(int i=0;i<max;i++)
     {
      scanf("%d",&arr[i]);
     }
     printf("The Array is :");
     display(arr);
     printf("Enter the Element to be inserted : ");
     scanf("%d",&num);
     printf("Enter the  Position where to insert : ");
     scanf("%d",&n1);
     insert(arr,num,n1);
     display(arr);
     printf("Enter the position which will to be Deleted : ");
     scanf("%d",&n2);
     del(arr,n2);
     display(arr);
     printf("Reversing the Array : ");
     rev(arr);
     printf("Enter the Element to be Searched ? : ");
     scanf("%d",&n3);
     search(arr,n3);
     return 0;
 }
