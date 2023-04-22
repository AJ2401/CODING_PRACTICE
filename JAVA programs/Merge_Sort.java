import java.util.Scanner;

public class Merge_Sort {
    public static void main(String[]args)
    {
        Scanner S=new Scanner(System.in);
        int n;
        System.out.println("Enter the Length of the Array : ");
        n=S.nextInt();
        int[]arr=new int[n];
        System.out.println("Enter the  Array Elements : ");
        for(int i=0;i<n;i++)
        {
            System.out.print("Element "+(i+1)+" : ");
            arr[i]=S.nextInt();
        }
        display(arr);
        System.out.println("\nSorted Array Using Merge Sort ");
        Mergesort(arr,0,arr.length-1);
        display(arr);
    }
    static void display(int[]arr)
    {
        for(int i=0;i<arr.length;i++)
        {
            System.out.print("\t"+arr[i]);
        }
    }
    static void Mergesort(int[]arr,int l,int u)
    {
        if(l<u)
        {
            int mid=(l+u)/2;
            Mergesort(arr,l,mid);
            Mergesort(arr,mid+1,u);

            merge(arr,l,u,mid);
        }
    }
    static void merge(int[]arr,int l,int u,int mid)
    {
        int l1=mid-l+1;
        int l2=u-mid;
        int[]a1=new int[l1];
        int[]a2=new int[l2];
        for(int p=0;p<l1;p++)
        {
            a1[p]=arr[p+l];
        }
        for(int p=0;p<l2;p++)
        {
            a2[p]=arr[p+mid+1];
        }
        int i=0,j=0,k=l;
        while(i<l1 && j<l2)
        {
          if(a1[i]>a2[j])
          {
              arr[l]=a2[j];
              l++;j++;
          }
          else if (a1[i]<a2[j])
          {
              arr[l]=a1[i];
              l++;i++;
          }
          else {
              arr[l] = a1[i];
              l++;i++;
          }
        }
        while(i<l1)
        {
            arr[l]=a1[i];
            l++;i++;
        }
        while(j<l2)
        {
            arr[l]=a2[j];
            l++;
            j++;
        }
    }
}
