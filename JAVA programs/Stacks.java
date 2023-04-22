import java.util.Scanner;
public class Stacks {
    int Arr[];
    int top;
    int n;
    public void impl() {
        Scanner S = new Scanner(System.in);
        top=-1;
        System.out.println("Enter the length of the Array : ");
        n = S.nextInt();
        int Arr[] = new int[n];
    }
    public void push(int item)
    {
        try {
            {
                if (top > n) {
                    top = top + 1;
                    Arr[top] = item;
                }
            }
        }
        catch(Exception e)
        {
            System.out.println("Exception Occured !");
        }
    }
    public int pop() {
        int n = 0;

            try {
                if (top >= -1) {
                    n = Arr[top];
                    top--;
                }
            }
            catch (Exception e)
            {
                System.out.println("Exception Occured Twice !");
            }
            return (n);
    }
    void display()
    {
        for(int i=0;i<n;i++)
        {
            System.out.print(" "+Arr[i]+" ");
        }
    }
    public static void main(String[]args)
    {
        int n;
        Scanner S=new Scanner(System.in);
        Stacks S1=new Stacks();
        S1.impl();
        int item;
        System.out.println("Enter the  Numbers of Elements to be Pushed : ");
        n=S.nextInt();
        for(int i=0;i<n;i++) {
            System.out.println("Enter the  Element to be Pushed : ");
            item = S.nextInt();
            S1.push(item);
        }
        System.out.println("The Stack is : ");
        S1.display();
        int num;
        num= S1.pop();
        System.out.println("The Element Poped "+num);
        num= S1.pop();
        System.out.println("The Element Poped "+num);
        num= S1.pop();
        System.out.println("The Element Poped "+num);
        System.out.println("The Stack After Deletion is : ");
        S1.display();
    }
}