import java.util.*;
import java.math.BigInteger;
public class a{
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        BigInteger b = sc.nextBigInteger();
        BigInteger ans = BigInteger.valueOf(1);

        while(!b.equals(BigInteger.ZERO)){
            ans = ans.multiply(b);
            b = b.subtract(BigInteger.ONE);
        }

        System.out.println(ans);
    }
}
