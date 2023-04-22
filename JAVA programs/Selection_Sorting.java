import java.util.Scanner;

public class Selection_Sorting {
    public static void main(String[]args)
    {
        Scanner S=new Scanner(System.in);
        int n;
        System.out.println("Enter the Array Length : ");
        n=S.nextInt();
        int[]arr=new int[n];
        System.out.println("Enter the Array Elements : ");
        for(int i=0;i<n;i++)
        {
            System.out.print("Element "+(i+1));
            arr[i]=S.nextInt();
        }
        System.out.println("The Array is : ");
        display(arr);
        System.out.println("\nThe Sorted Array Using Selection Sort is :");
        Selection_Sorting(arr);
        display(arr);
    }
    static void Selection_Sorting(int[]arr)
    {
        for(int i=0;i<arr.length;i++)
        {
            int small=i;
            for(int j=i+1;j<arr.length;j++)
            {
                if(arr[small]>arr[j])
                {
                    small=j;
                }
            }
            swap(arr,i,small);
        }
    }
    static void swap(int[]arr,int i,int small)
    {
        int temp=arr[small];
        arr[small]=arr[i];
        arr[i]=temp;
    }
    static void display(int[]arr)
    {
        for(int i=0;i<arr.length;i++)
        {
            System.out.print("\t"+arr[i]);
        }
    }
}
