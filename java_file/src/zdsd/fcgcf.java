package zdsd;

import java.util.Scanner;

public class fcgcf {
    public static void main(String[] args) {
        Person p = new Person();
        p.input();
        p.getResult();
        p.printAns();

    }

}

class Person {
    public String name;
    public double hours,hourly, fedral, state;
    public double grosspay,dedralpay,statepay,totalpay,nextpay;
    void getResult(){
        grosspay  = hours*hourly;
        dedralpay = grosspay*fedral;
        statepay = grosspay*state;
        totalpay = dedralpay + statepay;
        nextpay = grosspay - totalpay;
        return ;
    }

    void printAns(){
        System.out.print("Employ Name: "+ name +  "\n");
        System.out.print( "Hours Worked: " + hours + "\n");
        System.out.print("Pay rate: $" + hourly + "\n");
        System.out.print("Gross Pay: $" + grosspay + "\n");
        System.out.println("Deduction");
        System.out.println("  edral Withholding(20.0%): $" + dedralpay);
        System.out.println("  State Witholding (9.0%): $" + statepay);
        System.out.println("  Total Deduction: $" + totalpay + "\n");
        System.out.println("Net pay: $" + nextpay);
        return ;
    }

    void input() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter employee's name:");
        name = sc.nextLine();
        System.out.print("Enter number of hours worked in aweek:");
        hours = sc.nextDouble();
        System.out.print("Enter hourly pay rate:");
        hourly = sc.nextDouble();
        System.out.print("Enter fedral tax withholding rate:");
        fedral = sc.nextDouble();
        System.out.print("Enter state tax withholding rate:");
        state = sc.nextDouble();
    }
}
