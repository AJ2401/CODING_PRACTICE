package Endsems;
public class Demo1 {
    public int max(int n1,int n2,int n3)
    {
        if(n1>n2)
        {
            if(n1>n3)
            {
                return(n1);
            }
            else
            {
                return (n3);
            }
        }
        else
        {
            if(n2>n3)
            {
                return (n2);
            }
            else
            {
                return(n3);
            }
        }
    }
    public int max(int arr[],int len)
    {
        for(int i=0;i<len-1;i++)
        {
            for(int j=0;j<len-i-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
        return (arr[len-1]);
    }
    public int max(int arr[][],int m,int n)
    {
        int a[]=new int[m];
        for (int i=0;i<m;i++)
        {
           a[i]= max(arr[i],n);
        }
        int A=max(a,n);
        return (A);
    }
}