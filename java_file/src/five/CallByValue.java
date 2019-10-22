package five;

import static java.lang.System.*;
public class CallByValue {
    static void some(Customer c){
        c.name = "John";
        return ;
    }

    static void other(Customer c){
        c = new Customer("Bill");
        return ;
    }
    public static void main(String []args){
        Customer c1 = new Customer("Justin");
        some(c1);
        out.println(c1.name);
        Customer c2 = new Customer("Justin");
        other(c2);
        out.println(c2.name);

    }
}

class Customer{
    String name ;
    Customer(String name){
        this.name = name;
    }
}
