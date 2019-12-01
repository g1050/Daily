package four;

import java.math.BigDecimal;

//对象指定与相等性
public class f4 {
    void main01(String []args){
        /*
        java中有两大类型系统 基本类型 和 类类型
         ==对类类型来说表示是否参考至同一对象
        equals()表示内含值是否相同
        操作对象时候 = 表示指定参考名称参考至某个对象

         */
        BigDecimal b1 = new BigDecimal("0.1");
        BigDecimal b2 = new BigDecimal("0.1");
        if(b1 == b2){
            System.out.println("b1 == b2");
        }
        if(b1.equals(b2)) {
            System.out.println("b1.equals(b2)");
        }
    }

    public static void main(String []args) {
        BigDecimal b1 = new BigDecimal("0.1");
        BigDecimal b2 = new BigDecimal("0.1");
        BigDecimal b3 = b1;
        if(b1 == b2){
            System.out.println("b1 == b2");
        }
        else if(b1 == b3){
            System.out.println("b1 == b3");
        }//b1 和 b3 参考至同一个对象
    }
}
