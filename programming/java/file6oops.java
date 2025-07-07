class c1{
    String s1="object of class c1";
    c1(String name){
        System.out.println("Constructor of class c1, Hello "+ name);
    }
}
public class file6oops {
public static void main(String[] args) {
    c1 ob1 = new c1("Vansh");
    System.out.println(ob1.s1);
    
}
}