package K;
import java.util.Scanner;

public class toChararr {
    public static void main(String[] args) {
        
    System.out.print("Enter string");
    Scanner sc=new Scanner(System.in);
    char[] c = sc.next().toCharArray();
    for (char d : c) {
        System.out.println(d);
    }
    sc.close();
    }
}
