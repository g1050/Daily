package eight;
import java.math.BigInteger;
import java.text.DecimalFormat;
import java.util.Scanner;
import java.util.*;

abstract class shape {// 抽象类

    /* 抽象方法 求面积 */
    public abstract double getArea();

    /* 抽象方法 求周长 */
    public abstract double getPerimeter();
}

class RegularPolygon extends shape
{
    double n;
    double side;
    RegularPolygon(double n,double side){
        this.n = n;
        this.side = side;
    }

    public  double getArea(){
        return this.n*this.side*this.side/(Math.tan((Math.PI/n))*4);
    }

    public double getPerimeter(){
        return this.n * this.side;
    }
}
/* 你提交的代码将嵌入到这里 */
public class shapee {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        DecimalFormat d = new DecimalFormat("#.####");// 保留4位小数
        int n=input.nextInt();
        double side = input.nextDouble();

        shape rp = new  RegularPolygon(n,side);

        System.out.println(d.format(rp.getArea()));
        System.out.println(d.format(rp.getPerimeter()));
        input.close();
    }
}