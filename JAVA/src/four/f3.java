package four;

//java的BigDecimal类 英[ˈdesɪml]
import java.math.BigDecimal;

public class f3 {
    public static void main(String []args){

        //关于上述的if(1-0.8 == 0.2)问题
        //IEEE754浮点数运算规范

        BigDecimal op1 = new BigDecimal("1.0");
        BigDecimal op2 = new BigDecimal("0.8");
        BigDecimal res = op1.subtract(op2);

        System.out.println(res);
        System.out.println(1-0.8);
        if(res.equals(new BigDecimal("0.2"))){
            System.out.println("Equal");
        }

        /*
        //BigDecimal中的方法
        op1.plus();
        op1.subtract();
        op1.multiply();
        op2.divide();
         */
    }
}
