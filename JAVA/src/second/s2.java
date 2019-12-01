package second;

public class s2 {
    static public void main(String []args){
        //final int a = 5;// final相当于c++中的const变量值不可修改
        //a = 4;

        //int a = 100_0000; 支持_隔开
        //System.out.println(a);

        //float PI = 3.14;写下的浮点数字默认是double类型，double赋给float会报错误
        float PI = 3.14F;
        float PI2 = (float)3.14;

        long num = 22_0000_0000L;
        //long num = 2200000000L;写下一个证书时候默认不超过int类型长度

        short a = 1;
        short b = 1;
        short c = (short)(a + b);//运算整数时候不足int 自动提升为int
        //int c = a + b ;

        if(1.0-0.8 == 0.2){//不要对浮点数做相等性运算
            System.out.println("Equal");
        }else {
            System.out.print("No");
        }


    }

}
