import java.util.Scanner;

public class Stack_Gen {
    public static void main(String[] args) {
        Scanner S = new Scanner(System.in);
        int opt, o, n;
        do {
            System.out.println("\nOptions:\n1) Student Registration Number\n2) Employee Name\n");
            System.out.print("Enter your choice: ");
            opt = S.nextInt();
            switch (opt) {
                case 1:
                    System.out.print("Enter the Number of Students to be Entered: ");
                    n = S.nextInt();
                    Stack<Integer> reg = new Stack<Integer>(n);
                    do {
                        System.out.println("\nFollowing Operations can be performed : \n1) Push\n2) Pop\n3) Display\n");
                        System.out.print("Enter your choice: ");
                        o = S.nextInt();
                        switch (o) {
                            case 1:
                                System.out.print("Enter the Element to be Pushed: ");
                                int item = S.nextInt();
                                reg.push(item);
                                break;
                            case 2:
                                int data = reg.pop();
                                System.out.println("The item POPPED was " + data + "\n");
                                break;
                            case 3:
                                reg.display();
                                break;
                        } //End of o switch
                    }while(o >= 1 && o <= 3);
                    break;
                case 2:
                    System.out.print("Enter the max number of Employees: ");
                    int n1 = S.nextInt();
                    Stack<String> name = new Stack<String>(n1);
                    do{
                        System.out.println("\nFollowing Operations can be performed : \n1) Push\n2) Pop\n3) Display\n");
                        System.out.print("Enter your choice: ");
                        o = S.nextInt();
                        switch (o) {
                            case 1:
                                System.out.print("Enter the Element to be Pushed: ");
                                S.nextLine(); //nextInt() leaves newline in buffer
                                String item1 = S.nextLine();
                                name.push(item1);
                                break;
                            case 2:
                                String data1 = name.pop();
                                System.out.println("The item POPPED was " + data1 + "\n");
                                break;
                            case 3:
                                name.display();
                                break;
                        } //End of o switch
                    }while(o >= 1 && o <= 3);
                    break;
            } //End of opt switch()
        }while(opt >= 1 && opt <= 2);
    }
}

class Stack<T>
{
    T arr[];
    int top;
    int len;
    Stack(int len)
    {
        top=-1;
        this.len=len;
        arr=(T[]) new Object[len];
    }
    boolean isfull()
    {
        if(top==len)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    boolean isEmpty() {
        if (top == -1) {
            return true;
        } else {
            return false;
        }
    }
    void push(T item) {
        if (!isfull()) {
            top++;
            arr[top] = item;
        } else {
            System.out.println("The Stack is Full ");
        }
    }
    T pop() {
        if (!isEmpty()) {
            T data;
            data = arr[top];
            arr[top]=null;
            top--;
            return (data);
        } else {
            System.out.println("The Stack is Empty ");
            return null;
        }
    }
    void display() {
        if(isEmpty()){
            System.out.println("Stack is empty!");
        } else{
            System.out.println("The stack contents are: ");
            for (int i = 0; i <= top; i++)
            {
                System.out.print(arr[i]+ ", ");
            }
            System.out.println();
        }

    }
}