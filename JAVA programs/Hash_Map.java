package ENDSEMS_1;
import java.util.HashMap;
import  java.util.Scanner;
public class Hash_Map {
    public static void main(String[]args)
    {
        HashMap HM=new HashMap();
        HM.put("a",67);
        HM.put("b","Happy");
        HM.put("c",87.236);
        System.out.println(" "+HM);
        HM.replace("c",87.236,"HI ABHI");
        System.out.println(" "+HM);
        HM.remove("b");
        System.out.println(" "+HM);
        System.out.println(HM.containsKey("b"));
        System.out.println("Size : "+HM.size());
        System.out.println(HM.keySet());

    }
}
