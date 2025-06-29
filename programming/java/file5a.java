import java.util.Scanner;
public class file5a {

    static void demo(){
        Scanner mobj=new Scanner(System.in);
        System.out.print("Enter first number: ");
        int a = mobj.nextInt();
        System.out.print("Enter Second number: ");
        int b = mobj.nextInt();
        System.out.println("select operator:- 1 for '+' , 2 for '-' , 3 for '*' , 4 for '/'");
        int operator=mobj.nextInt();
        switch (operator) {
            case 1:
                System.out.println(a+b);
                break;
            case 2:
                System.out.println(a-b);
                break;
            case 3:
                System.out.println(a*b);
                break;
            case 4:
                System.out.println(a/b);
                break;
            default:
            System.out.println("invalid input, Reenter everything.");
            System.out.println();
            System.out.println();
            System.out.println();
            demo();
                break;
        }







mobj.close();

    }
    public static void main(String[] args) {
        demo();
    }
}
