package zdsd;

import java.util.Scanner;
public class Circle {
    double x1,y1,r1;
    double x2,y2,r2;
    double d;
    double flag;
    public void input(){
        Scanner sc = new Scanner(System.in);
        x1 = sc.nextDouble();
        y1 = sc.nextDouble();
        r1 = sc.nextDouble();
        x2 = sc.nextDouble();
        y2 = sc.nextDouble();
        r2 = sc.nextDouble();
    }

    void judgePos(){
        d = Math.sqrt(Math.pow((x1-x2),2)+Math.pow((y1-y2),2));
        if(d <= Math.abs(r1-r2) ) flag = 1;
        else flag = 2;
    }

    public void printAns(){
        judgePos();
        if(flag == 1){
            System.out.println("circle2 is inside circle1");
        }else if(flag == 2){
            System.out.println("Circle2 is overlaps with Circle1");
        }
    }

    public static void main(String []args){
        //System.out.println("Hello Circle");
        Circle c = new Circle();
        c.input();
        c.printAns();
    }



}
