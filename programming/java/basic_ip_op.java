import java.util.Scanner;
public class basic_ip_op{
    public static void main(String[] args) {
        System.out.println("hi");
        Scanner mobj= new Scanner(System.in);
        
        System.out.print("enter name: ");
        String a = mobj.nextLine();
        mobj.close();
        System.out.println("your name is "+a);
        

    }
}