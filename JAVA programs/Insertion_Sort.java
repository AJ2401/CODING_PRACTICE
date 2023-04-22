import java.util.Scanner;

public class Insertion_Sort {
    public static void main(String[]args)
    {
        Scanner S=new Scanner(System.in);
        int n;
        System.out.println("Enter the Length of the Array  :");
        n=S.nextInt();
        int[]arr=new int[n];
        System.out.println("Enter the Array Elements :");
        for(int i=0;i<n;i++)
        {
            System.out.print("Element "+(i+1)+" : ");
            arr[i]=S.nextInt();
        }
        display(arr);
        System.out.println();
        Asscending_Order(arr);
        System.out.println();
       // Descending_Order(arr);
    }
    static void display(int[]arr){
        for(int i=0;i<arr.length;i++)
        {
            System.out.print("\t"+arr[i]);
        }
    }
    static void Asscending_Order(int[]arr) {
        int current;
        int j;
        for (int i = 1; i < arr.length; i++)
        {
            current=arr[i];
            j=i-1;
            while( j>=0 && arr[j]>current)
            {
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=current;
        }
        display(arr);
    }
  /*  static void Descending_Order(int[]arr)
    {

    }*/
}
