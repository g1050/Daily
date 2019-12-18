import java.util.Scanner;
import java.math.BigInteger;

public class x472{
    public static void main(String []args){
        // System.out.println("Hello java");
        
        int cnt = 0;
        BigInteger n;
        Scanner sc = new Scanner(System.in);
        n = sc.nextBigInteger();

        for(BigInteger i  =  BigInteger.valueOf(Long.MAX_VALUE).add(1);cnt != 3;i = i.add(BigInteger.ONE)){
            // System.out.println(i);
            if(i.mod(n).equals(BigInteger.ZERO)){
                cnt++;
                System.out.println(i);
            }
            
        }

    }
}
