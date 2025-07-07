interface parent1 {
void showp1();
}
interface parent2 {
void showp2();
}

class Child implements parent1,parent2{
public void showp1(){
    System.out.println("parent 1 here ");
}
public void showp2(){
    System.out.println("parent 2 here ");
}
}
public class file9 {
    public static void main(String[] args) {
        Child c1 =new Child();
        c1.showp1();
        c1.showp2();
    }
}
