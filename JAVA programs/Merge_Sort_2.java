import java.util.Scanner;

public class Merge_Sort_2 {
    public static void main(String[]args)
    {
        int n;
        Scanner S=new Scanner(System.in);
        System.out.println("Enter the Length of the Array : ");
        n=S.nextInt();
        int[]arr=new int[n];
        System.out.println("Enter the Array Elements :");
        for(int i=0;i<n;i++)
        {
            System.out.print("Element "+(i+1)+" : ");
            arr[i]=S.nextInt();
        }
        System.out.println("The Array is : ");
        display(arr);
        System.out.println("\nThe Sorted Array is Using Merge Sort Method : ");
        MergeSort(arr,0,arr.length-1);
        display(arr);
    }
    static void display(int[]arr)
    {
        for(int i=0;i<arr.length;i++)
        {
            System.out.print("\t"+arr[i]);
        }
    }
    static void MergeSort(int[]arr,int l,int u)
    {
        if(l<u)
        {
            int mid=(l+u)/2;
            MergeSort(arr,l,mid);
            MergeSort(arr,mid+1,u);
            Merge(arr,l,mid,u);
        }
    }
    static void Merge(int[]arr,int l,int mid,int u)
    {
        int l1=mid-l+1;
        int l2=u-mid;
        int[]a1=new int [l1];
        int []a2=new int[l2];
        for(int i=0;i<l1;i++)
        {
            a1[i]=arr[i+l];
        }
        for(int i=0;i<l2;i++)
        {
            a2[i]=arr[mid+1+i];
        }
        int p=0,q=0,r=l;
        while(p<l1 && q<l2 && r<u)
        {
            if(a1[p]>a2[q])
            {
                arr[l]=a2[q];
                q++;l++;
            }
            else
            {
                arr[l]=a1[p];
                l++;p++;
            }
        }
        while(p<l1)
        {
            arr[l]=a1[p];
            l++;p++;
        }
        while(q<l2)
        {
            arr[l]=a2[q];
            l++;q++;
        }
    }
}
