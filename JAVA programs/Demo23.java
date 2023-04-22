import java.io.File;
public class Demo23 {
    public static void main(String[]args)
    {
        File f =new File("Demo23.txt");
        String path=f.getPath();
        String name=f.getName();
        System.out.println("The File Name is \n"+name);
        System.out.println("The Path of the File is : \n"+path);
        String Abpath=f.getAbsolutePath();
        System.out.println("The Absolute Path of the File is : \n"+Abpath);
        String Parent=f.getParent();
        System.out.println("The Sub Directory is : \n"+Parent);


    }
}
