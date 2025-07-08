public class file10 {
    static void check(int age){
        if(age<18){
            throw new ArithmeticException("you aren't allowed ");
        }
        else{
            System.out.println("Welcome ");
        }
    }
    public static void main(String[] args) {
        check(6);
    }
}
