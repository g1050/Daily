import java.util.Scanner;
import java.text.DecimalFormat;

interface IShape {
    double getArea();

    double getPerimeter();
}

class RHexagon implements IShape{
    double n;
    RHexagon(double a){
        n = a;
    }
    public double getArea(){
        return Math.sqrt(3)*n*n/4*6;
    }
    public double getPerimeter(){
        return 6*n;
    }
}
public class x662 {
    public static void main(String[] args) {
        DecimalFormat d = new DecimalFormat("#.####");
        Scanner input = new Scanner(System.in);
        double a = input.nextDouble();
        IShape r = new RHexagon (a);
        System.out.println(d.format(r.getArea()));
        System.out.println(d.format(r.getPerimeter()));
        input.close();
    }
}

