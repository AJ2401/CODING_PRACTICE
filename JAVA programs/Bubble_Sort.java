import java.util.Scanner;
public class Bubble_Sort {
    public static void main(String[]args)
    {
        int n;
        Scanner S=new Scanner(System.in) ;
        System.out.println("Enter the Length of Array :");
        n=S.nextInt();
        int[]arr=new int[n];
        System.out.println("Enter the Elments of the Array :");
        for(int i=0;i<n;i++)
        {
            System.out.print("Element "+(i+1)+" : ");
            arr[i]=S.nextInt();
        }
        System.out.println("The Array is : ");
        Display(arr);
        System.out.println("\nThe Asscending Order Sort is :");
        Asscending_Sort(arr);
        System.out.println("\nThe Desscending Order Sort is :");
        Descending_Sort(arr);
    }
    static void Display(int[] arr)
    {
        for(int i=0;i<arr.length;i++)
        {
            System.out.print("\t"+arr[i]);
        }
    }
   static void Asscending_Sort(int[]arr)
    {
        for(int i=0;i< arr.length-1;i++)
        {
            for(int j=0;j< arr.length-1-i;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
        Display(arr);
    }
   static void Descending_Sort(int[]arr)
    {
        for(int i=0;i<arr.length-1;i++)
        {
            for(int j=0;j<arr.length-1-i;j++)
            {
                if(arr[j]<arr[j+1])
                {
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
        Display(arr);
    }
}
