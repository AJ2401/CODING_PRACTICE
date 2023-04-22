import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;
public class File_Read {
    public static void main(String[] args) throws FileNotFoundException, IOException {
        File f = new File("/Users/abhij/OneDrive/Desktop/file_demo.txt");
        Scanner S = new Scanner(f);
        String F_content=" Hi Abhishek Jhawar 200905144 ";
        while (S.hasNextLine()) {
            F_content = F_content.concat(S.nextLine()+"\n\n");
        }
        FileWriter fw=new FileWriter("/Users/abhij/OneDrive/Desktop/My_Demo.txt");
        fw.write(F_content);
        fw.close();
    }
}