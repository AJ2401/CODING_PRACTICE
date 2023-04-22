import java.util.Scanner;

public class Quick_Sort {
    public static void main(String[]args)
    {
        Scanner S=new Scanner(System.in);
        int n;
        System.out.println("Enter the Length of the Array :");
        n=S.nextInt();
        int[]arr=new int[n];
        System.out.println("Enter the Array Elements : ");
        for(int i=0;i<n;i++)
        {
            System.out.print("Element "+(i+1)+" : ");
            arr[i]=S.nextInt();
        }
        System.out.println("The Array is : ");
        display(arr);
        System.out.println("The Sorted Array Using Quick Sort is : ");
        QuickSort(arr,0, arr.length-1);
        display(arr);
    }
   static void display(int[]arr)
   {
       for(int i=0;i<arr.length;i++)
       {
           System.out.print("\t"+arr[i]);
       }
   }
   static void QuickSort(int[]arr,int l,int u)
   {
       if(l<u)
       {
           int pa=Part(arr,l,u);
           QuickSort(arr,l,pa-1);
           QuickSort(arr,pa+1,u);
       }
   }
   static void Swap(int[]arr,int i,int j)
   {
       int temp=arr[i];
       arr[i]=arr[j];
       arr[j]=temp;
   }
   static int Part(int[]arr,int l,int u)
   {
       int pivot=arr[u];
       int k=l-1;
       for(int i=l;i<u-1;i++)
       {
           if(pivot>arr[i])
           {
               k++;
               Swap(arr,k,i);
           }
           Swap(arr,k,(i+1));
           return(i+1);
       }
       return(-1);
   }
}
