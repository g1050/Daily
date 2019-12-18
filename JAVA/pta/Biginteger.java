import java.math.BigInteger;
import java.math.BigDecimal;

public class Biginteger{
    public static void main(String []args){

        //通过字符串创建一个大数
        BigInteger b1 = new BigInteger("123");
        //通过int\long创建一个大数
        BigInteger b2 = BigInteger.valueOf(111);

        System.out.println(b1 + " " + b2);

        //比较大小\判断是否相等
        if(b1.equals(b2)){
            System.out.println("equal");
        }
        if(b1.compareTo(b2) > 0){//返回b1 - b2 的正负
            System.out.println("b1 > b2");
        }

        //大数中的常数
        System.out.println(BigInteger.ZERO);
        System.out.println(BigInteger.ONE);
        System.out.println(BigInteger.TEN);

        //常用方法
        b1.gcd(b2);
        b1.mod(b2);
        System.out.println(b1.max(b2));
        System.out.println(b2.min(b2));

        //加减乘除
        b1.add(b2);
        b1.subtract(b2);
        b1.multiply(b2);
        b1.divide(b2);

        //创建一个高精度数字
        BigDecimal b3 = new BigDecimal("3.1415926535");
        BigDecimal b4 = new BigDecimal(Double.toString(3.1515953835));

        System.out.println(b3 + " " + b4);
        System.out.println(b3.add(b4));
    }
}
