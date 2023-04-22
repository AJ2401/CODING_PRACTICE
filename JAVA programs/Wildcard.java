import java.util.List;
import java.util.*;
import java.util.Scanner;
public class Wildcard {
    public static void main(String[]args)
    {
        int n;
        Scanner S=new Scanner(System.in);
         ArrayList<Integer>A1=new ArrayList<Integer>();
         ArrayList<String>A2=new ArrayList<String>();
        System.out.println("\nEnter the length of the Array\n");
        n=S.nextInt();
        int ele[]=new int[n];
        System.out.println("\nEnter the Integer  Numbers : \n");
        for(int i=0;i<n;i++) {
            System.out.print(" Element "+ (i+1)+":");
            ele[i]=S.nextInt();
            A1.add(ele[i]);
        }
        System.out.println("The List of Array (Integer) is : \n");
        for(int i=0;i<n;i++)
        {
            System.out.print(" "+A1.get(i)+" ");
        }
        System.out.println();
        System.out.println();

        System.out.println("\nEnter the length of the Array\n");
         n=S.nextInt();
        String element[]=new String[n];
        System.out.println("\nEnter the Array Elements : \n");
        for(int i=0;i<n;i++) {
            System.out.print("Element "+i+":");
            element[i]=S.nextLine();
            A2.add(element[i]);
        }
        System.out.println("The List of Array (String) is : \n");
        for(int i=1;i<n;i++)
        {
            System.out.print(" "+A2.get(i)+" ");
        }
        System.out.println();
        System.out.println();

    }
}
