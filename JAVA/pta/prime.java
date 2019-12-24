import java.util.*;
import java.math.*;
public class prime{
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);

        BigInteger b = sc.nextBigInteger();
        int n = sc.nextInt();

        while(n > 0){
            if(b.isProbablePrime(100)){
                System.out.println(b);
                n--;
            }   
            b = b.nextProbablePrime();
        }

    }
}
