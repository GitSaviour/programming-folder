import java.util.Scanner;
class factorial{
    public static void main(String args[]){
Scanner mobj = new Scanner(System.in);
int n = mobj.nextInt();
mobj.close();
int a =1;
for(int i=n;i>1;i--){
a=a*i;
}
System.out.println(a+" is factorial of "+n);
    }
}