package zdsd;

import java.util.Scanner;

public class equal {
    double a,b,c;
    double q;
    double res1,res2;
    void input(){
        Scanner sc = new Scanner(System.in);
        a = sc.nextDouble();
        b = sc.nextDouble();
        c = sc.nextDouble();
    }

    int getRootNum(){
        q = b*b-4*a*c;
        if(q == 0) return 0;
        else if(q < 0) return -1;
        else return 1;
    }

    void getResult(){
        getRootNum();
        if(q == 0){
            res1 = (-b+Math.sqrt(q))/(2*a);
        }else if(q < 0){
            return ;
        }else if(q > 0) {
            res1 = (-b+Math.sqrt(q))/(2*a);
            res2 = (-b-Math.sqrt(q))/(2*a);
        }
    }

    void printAns(){
        if(q == 0) System.out.println("The root is " + res1);
        else if(q < 0) System.out.println("THe equartion has no real roots");
        else System.out.println("THe root are "+  res1 + "and " + res2);
    }

    public static void main(String []args){
        //System.out.println("Hello java!");
        Circle c = new Circle();
        equal e =  new equal();
        e.input();
        e.getResult();
        e.printAns();
    }
}
