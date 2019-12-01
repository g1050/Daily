package second;
import java.lang.Float;
public class s1 {
    public static void main(String []args){
        //System.out.println("Hello Circle");

        //byte short int long 范围
        System.out.printf("Byte range:%d - %d \n",Byte.MIN_VALUE, Byte.MAX_VALUE);
        System.out.printf("Short range:%d - %d \n",Short.MIN_VALUE, Short.MAX_VALUE);
        System.out.printf("Integer range:%d - %d \n",Integer.MIN_VALUE, Integer.MAX_VALUE);
        System.out.printf("Long  range:%d - %d \n",Long.MIN_VALUE, Long.MAX_VALUE);

        //float double 精度范围
        System.out.printf("Float range:%f - %f \n",Float.MIN_VALUE, Float.MAX_VALUE);
        System.out.printf("Double range:%f - %f \n",Double.MIN_VALUE, Double.MAX_VALUE);

        //char 表示Unicode范围
        System.out.printf("Character range:%h - %h \n",Character.MIN_VALUE, Character.MAX_VALUE);

        //boolean的两个值
        System.out.printf("Boolean range:%b - %b \n",Boolean.TRUE, Boolean.FALSE);
    }
}
