import java.util.Scanner;
public class Exchange_Gen
{
    public static void main(String[]args)
    {
        Scanner S=new Scanner(System.in);
        int n,pos1,pos2;
        System.out.println("Enter the Number of Elements in the Array : ");
        n=S.nextInt();
        Integer[] arr =new Integer[n];
        System.out.println("Enter the Elements in the Array : ");
        for(int i=-0;i<n;i++)
        {
            arr[i]=S.nextInt();
        }
        System.out.println("The Array is : ");
        display(arr,n);
        System.out.println("Enter the Positions to be Exchanged ");
        System.out.print("First Position : ");
        pos1=S.nextInt();
        System.out.print("Second Position : ");
        pos2=S.nextInt();
        exchange(arr,pos1,pos2);
        System.out.println("After Exchanging the Array is : ");
        display(arr,n);
    }
    static <T> void exchange(T[]a,int pos1,int pos2)
    {
        T temp;
        temp=a[pos1];
        a[pos1]=a[pos2];
        a[pos2]=temp;
    }
   static  <T>void display(T[] a,int len)
    {
        for(int i=0;i<len;i++)
        {
            System.out.print(" "+a[i]+" ");
        }
    }
}
