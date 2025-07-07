package alpha;
public class file7b {
    static int a=15;
    static int b=5;
    static void fxn(){
        // static{
        //     not valid inside fxn
        // }
        System.out.println("Function of file 7b ");
        System.out.println("a is "+a);
    } 


    //static block is imp for imp info display at start, static block can be made in class only not inside of a fxn
    static{
        System.out.println("Run this first then everything else ");
    }
      static{
        System.out.println("Run this second then everything else ");
    }
    public static void main(String[] args) {
        fxn();
    }
    
}
