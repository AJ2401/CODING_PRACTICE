package Endsems;
// BINARY SORTING
public class Sort {
   public void Sorting (int Arr[])
    {
        for(int i=0;i<Arr.length-1;i++)
        {
            int min = i;
            for (int j = 0; j < Arr.length; j++) {
                if (Arr[j] < Arr[min]) {
                    min = j;
                }
            }
            int temp = Arr[min];
            Arr[min] = Arr[i];
            Arr[i] = temp;
        }

        System.out.println("The Sorted Array is : \n");
        for(int i=0;i< Arr.length;i++)
        {
            System.out.print(" "+Arr[i]+" ");
        }
    }
}
