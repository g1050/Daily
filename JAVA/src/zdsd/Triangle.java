package zdsd;

import java.util.Scanner;
public class Triangle {
    public double x1,y1,x2,y2,x3,y3;
    public double l1,l2,l3;
    public double s;
    void input() {
        Scanner sc = new Scanner(System.in);
        x1 = sc.nextDouble();
        y1 = sc.nextDouble();
        x2 = sc.nextDouble();
        y2 = sc.nextDouble();
        x3 = sc.nextDouble();
        y3 = sc.nextDouble();
    }

    void getEdge(){
        l1 = Math.sqrt(Math.pow((x1-x2),2)+Math.pow((y1-y2),2));
        l2 = Math.sqrt(Math.pow((x1-x3),2)+Math.pow((y1-y3),2));
        l3 = Math.sqrt(Math.pow((x3-x2),2)+Math.pow((y3-y2),2));
    }

    void getArea(){
        getEdge();
        double p = (l1+l2+l3)/2;
        this.s = Math.sqrt(p*(p-l1)*(p-l2)*(p-l3));
        //System.out.println(this.s);
    }


    public static void main(String []args){
        //System.out.println("Hello world!");
        Triangle t = new Triangle();
        t.input();
        t.getArea();
        System.out.printf("%.1f",t.s);
        //System.out.println("The are of the triangle is " + t.s);
    }
}

