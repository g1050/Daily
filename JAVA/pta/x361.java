import java.util.Scanner;
import java.text.DecimalFormat;

interface IShape {
    double getArea();

    double getPerimeter();
}


class RHexagon implements IShape
{
        private double a;
        RHexagon(double a){
            this.a = a;
        }

        public double getArea(){
            return 6*Math.sqrt(3)*a*a/4;
        }

        public double getPerimeter(){
            return 6*a;
        }
}

public class x361 {
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
