package four;
//基本类型打包器 Wrappe [ˈræpə(r)]
import java.util.*;
import java.math.*;

public class IntergerDemo {
    void main01(String []args){
//        int data1 = 10;
//        int data2 = 20;
//        Integer w1 = new Integer(data1);
//        Integer w2 = new Integer(data2);//打包基本类型
//        System.out.println(data1/3);
//        System.out.println(w1.doubleValue()/3);
//        System.out.println(w1.compareTo(w2));
//        //compaerTo相比== != 返回更多信息 0 1 -1
    }
    void main02(String []args){
        Scanner cin = new Scanner(System.in);
        int t = cin.nextInt();
        for(int i = 0;i<t;i++){
            BigInteger b1 = cin.nextBigInteger();
            BigInteger b2 = cin.nextBigInteger();
            BigInteger n = cin.nextBigInteger();
        }


        BigInteger b3 ;
    }
    void main03(String []args){
        Integer data1 = 10;
        Integer data2 = 10;
        Number res = data1 + data2;
        System.out.println(res);
    }

    public static void main(String []args){
        Integer a = 100;
        Integer b = 100;
        if(a == b){
            System.out.println("a == b");
        }else{
            System.out.println("a != b");
        }


        Integer c = 200;
        Integer d = 200;
        if(c == d){
            System.out.println("c == d");
        }else{
            System.out.println("c != d");
        }

        /*
        a == b 因为在-128 - 127内Interger对象会在Cache中打包过的值,所以a和b参考至同一对象
        c != d 而c != d会建立新的对象
         */

    }
}
