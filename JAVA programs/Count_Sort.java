import java.util.Arrays;
import java.util.Scanner;

public class Count_Sort {
    public static void main(String[]args)
    {
        Scanner S=new Scanner(System.in);
        int n;
        System.out.println("Enter the Length of the Array : ");
        n=S.nextInt();
        int[]arr=new int[n];
        System.out.println("Enter the Array Elements  : ");
        for(int i=0;i<n;i++)
        {
            System.out.print("Element "+(i+1));
            arr[i]=S.nextInt();
        }
        System.out.println("The Arary is : ");
        display(arr);
        CountSort(arr);
    }
    static void display(int[]arr)
    {
        for(int i=0;i<arr.length;i++)
        {
            System.out.print("\t"+arr[i]);
        }
        System.out.println();
    }
    static void CountSort(int[]arr)
    {
        int max= Arrays.stream(arr).max().getAsInt();
       // System.out.println(max);
        int[]count;
        count= new int[max];
        for(int i=0;i<max;i++)
        {
            count[i]=0;
        }
        for(int i=0;i<arr.length;i++)
        {
            count[arr[i]-1]++;
        }
        for(int i=1;i<max;i++)
        {
            count[i]+=count[i-1];
        }
        int[]out=new int[arr.length];
        for(int i=arr.length-1;i<=0;i--)
        {
            out[--count[arr[i]]]=arr[i];
        }
        System.out.println("The Sorted Array is Using Count Sort ");
        display(out);
    }
}
