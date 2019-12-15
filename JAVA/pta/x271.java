import java.math.BigInteger;
import java.util.Scanner;

public class x271{
    public static void main(String []args){
        static int a = 1;
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        
        String num[] = str.split("\\D",0);

        BigInteger b1 = new BigInteger(num[0]);
        BigInteger b2 = new BigInteger(num[1]);

        if(str.indexOf('/') != -1){
            System.out.println(b1.divide(b2));
        }
        else if(str.indexOf('+') != -1){
            System.out.println(b1.add(b2));
        }
        else if(str.indexOf('*') != -1){
            System.out.println(b1.multiply(b2));
        }
        else if(str.indexOf('-') != -1){
            System.out.println(b1.subtract(b2));
        }
        // System.out.println("Hello World");
    }
}
