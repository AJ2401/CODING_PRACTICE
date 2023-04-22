import java.util.Scanner;
import java.lang.Exception;
class Demo21{
    public static void main(String [] args){
        Scanner S = new Scanner(System.in);
        System.out.println("Enter the dimensions of the matrix(M X N): \n");
        System.out.println("n = ");
        int n = S.nextInt();
        System.out.println("m = ");
        int m = S.nextInt();
        Matrix matrix = new Matrix(n,m);
        matrix.input();
        Thread threads[] = new Thread[n];
        Rowadd Row_Add[] = new Rowadd[n];
        for(int i=0; i<n; i++){
            Row_Add[i] = new Rowadd(matrix.Row(i));
            threads[i] = new Thread(Row_Add[i]);
            threads[i].start();
        }
        int sum = 0;
        try{
            for(int i=0;i<n; i++){
                threads[i].join();
                sum += Row_Add[i].Row_Add();
            }
        }
        catch (InterruptedException e){
            e.printStackTrace();
        }
        System.out.println("Total sum = "+sum);
    }
}
class Matrix{
 int arr[][];
    Matrix(int n, int m){
        arr = new int[n][m];
    }
    public int[] Row(int i){
        return arr[i];
    }
    public void input(){
        Scanner S = new Scanner(System.in);
        System.out.println("Enter the Matrix:");
        for(int i=0; i<arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++)
                arr[i][j] = S.nextInt();
        }
        System.out.println("The Array is : \n");
        for (int i=0;i<arr.length;i++) {
            for (int j = 0; j < arr[i].length; j++)
            {
                System.out.print(" "+arr[i][j]+" ");
            }
            System.out.println();
        }
    }
}
class Rowadd extends Thread implements Runnable {
    int arr[];
    int sum;
    Rowadd(int a[]){
        arr = a;
        sum = 0;
    }
    public int Row_Add(){
        return sum;
    }
    public void run(){
        System.out.println("Running " + getName());
        for (int i:arr)
            sum += i;
    }
}


