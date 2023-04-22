package Endsems;
public class Bin_Search {
    public int Search(int Arr[],int s,int e,int ele)
    {
        int mid=0;
        if(s<e)
        {
         mid=(s+e)/2;
        }
        if(Arr[mid]==ele)
        {
          return(mid+1);
        }
       else if(Arr[mid]>ele)
        {
            return (Search(Arr,mid+1,e,ele));
        }
        else if (Arr[mid]<ele)
        {
            return (Search(Arr,s,mid-1,ele));
        }
        else
        {
            return -1;
        }
    }
}