import java.util.Scanner;
import java.lang.*;
public class Demo22 {
    public static void main(String[]args)
    {
        int a;
        Scanner S=new Scanner(System.in);
        System.out.println("Enter any  Number to iterate : ");
        a=S.nextInt();
        CP cp=new CP();
        new Producer(cp,a);
        new Consumer(cp);
    }
}
class CP
{
    int n;
    boolean v=false;
    synchronized int Get() {
        while (!v) {
            try {
                wait();
            } catch (InterruptedException E) {
                System.out.println("Excception occured !");
            }
        }
        System.out.println("Got "+n);
        v=false;
        notify();
        return (n);
    }
    synchronized void Put(int n)
    {
        this.n=n;
        while (v)
        {
            try
            {
                wait();
            }
            catch(InterruptedException e)
            {
                System.out.println("Exception Occured !");
            }
        }
        v=true;
        System.out.println("Put "+n);
        notify();
    }
}
class Producer implements Runnable{
    CP cp;
    int a;
    Producer(CP cp,int a)
    {
        this.a=a;
        this.cp=cp;
        new Thread(this,"Producer").start();
    }
    public void run() {
        int i=0;
        while(i<a)
        {
            cp.Put(i++);
        }
    }
}
class Consumer implements Runnable
{
    CP cp;
    Consumer(CP cp)
    {
        this.cp=cp;
        new Thread(this,"Consumer").start();
    }
    public void run() {
        int i=0;
        while(true)
        {
            cp.Get();
        }
    }
}