import java.util.Scanner;
public class function_practice {
    static void fact(){
Scanner mobj= new Scanner(System.in);
// mobj.useDelimiter("\"");
System.out.print("Enter an integer to get its factorial: ");
int ip=mobj.nextInt();
        long mul=1;
for(int i=ip;(i>=1);--i){
mul*=i;
if(mul>1000000000){System.out.println("out of calc power:(");
break;}
}
if(mul<1000000000){
System.out.print("Value of factorial of "+ip+" is "+mul);
}
mobj.close();
}
    public static void main(String[] args) {
        fact();
    }
}
