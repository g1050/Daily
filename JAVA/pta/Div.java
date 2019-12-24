import java.util.*;
import java.math.BigInteger;
public class Div{
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        String str = sc.next();

        if(str.indexOf('/') != -1){
            String ob[] = str.split("\\D",0);
            BigInteger b1 = new BigInteger(ob[0]);
            BigInteger b2 = new BigInteger(ob[1]);

            System.out.println(b1.divide(b2));
        }else if(str.indexOf('-') != -1){
            String ob[] = str.split("-",0);
            BigInteger b1 = new BigInteger(ob[0]);
            BigInteger b2 = new BigInteger(ob[1]);

            System.out.println(b1.subtract(b2));
        }else if(str.indexOf('*') != -1){
            String ob[] = str.split("\\*",0);
            BigInteger b1 = new BigInteger(ob[0]);
            BigInteger b2 = new BigInteger(ob[1]);

            System.out.println(b1.multiply(b2));
        }else if(str.indexOf('+') != -1){
            String ob[] = str.split("\\+",0);
            BigInteger b1 = new BigInteger(ob[0]);
            BigInteger b2 = new BigInteger(ob[1]);

            System.out.println(b1.add(b2));
        }



    }
}
