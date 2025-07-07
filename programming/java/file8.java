public class file8 {
    public  class file8a{
        int a= 5;
    }
    static int a=10;
    public static void main(String[] args) {
        file8 oobj =new file8();
        file8.file8a iobj = oobj.new file8a();
        // file8.file8a obj =new file8.file8a();
        System.out.println(iobj.a);
        System.out.println(file8.a);

    }
}
