import java.util.Scanner;
public class MAX_Array {
    public static void main(String []args)
    {
        Scanner S=new Scanner(System.in);
        int pos;
        System.out.println("Enter the Length of the Array : ");
        int n = S.nextInt();
        int[]arr=new int[n];
        System.out.println("Enter the Array Elements : ");
        for(int i=0;i<n;i++)
        {
            System.out.print("Element "+(i+1)+" : ");
            arr[i]=S.nextInt();
        }
        display(arr);
        System.out.println("Enter the Postion :");
        pos=S.nextInt();
        int max =-1;
        for(int i=1;i<pos;i++)
        {
            max=arr[0];
            if(max<arr[i])
            {
                max=arr[i];
            }
        }
        System.out.println("The Maximum Element from 0 to "+pos+" is  :  "+max);
    }
    static void display(int[]arr)
    {
        for(int i=0;i<arr.length;i++)
        {
            System.out.print("\t"+arr[i]);
        }
        System.out.println();
    }
}
