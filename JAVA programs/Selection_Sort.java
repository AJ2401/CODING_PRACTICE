import java.util.Scanner;

public class Selection_Sort {
   static void Selection_Sort(int[] arr)
    {
        for(int i=0;i<arr.length-1;i++)
        {
            int small=i;
            for(int j=i+1;j< arr.length;j++)
            {
                if(arr[small]>arr[j])
                {
                    small=j;
                }
            }
            int temp=arr[small];
            arr[small]=arr[i];
            arr[i]=temp;
        }
    }
    static void display(int[]arr)
    {
        for(int i=0;i<arr.length;i++)
        {
            System.out.print("\t"+arr[i]);
        }
    }
    public static void main(String[]args)
    {
        Scanner S=new Scanner(System.in);
        int n;
        System.out.println("Enter the Length of Array : ");
        n=S.nextInt();
        int[]arr=new int[n];
        System.out.println("Enter the Array Elements : ");
        for(int i=0;i<n;i++)
        {
            arr[i]=S.nextInt();
        }
        System.out.println("The Array is : ");
        display(arr);
        System.out.println();
        System.out.println("The Sorted Array Using Selection Sort is :");
        Selection_Sort(arr);
        display(arr);
    }
}
