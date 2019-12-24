import java.util.Scanner;
/* 你的代码将被嵌入到这里 */
class Rectangle{
    double w,h;
    Rectangle(double w,double h){
        this.w = w;
        this.h = h;
    }

    double getArea(){
        return w*h;
    }

    double getPerimeter(){
        return 2*(w+h);
    }
}


public class R{
  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);

    double w = input.nextDouble();
    double h = input.nextDouble();
    Rectangle myRectangle = new Rectangle(w, h);
    System.out.println(myRectangle.getArea());
    System.out.println(myRectangle.getPerimeter());

    input.close();
  }
}
