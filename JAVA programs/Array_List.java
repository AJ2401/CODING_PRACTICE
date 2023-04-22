package ENDSEMS_1;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
public class Array_List {
    public static void main(String[]args)
    {
        Scanner S=new Scanner(System.in);
        ArrayList list=new ArrayList();
        String ele;
        int  n=10;
        System.out.println("The Fruit addition is in LOOP ... if u want to come out Enter 0\n");
        while(n>0)
        {
            System.out.println("Enter any Fruit : \n");
            ele=S.next();
            list.add(ele);
            System.out.println("\nList : "+list);
            n--;
        }
        String search;
       System.out.println("Enter the Fruit to be Searched : \n");
       search=S.next();
       list.contains(search);
    }
}
