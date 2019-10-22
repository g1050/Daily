package five;

public class Cashapp {
    String number;
    int balance;
    int bonus;

    Cashapp(String number,int balance,int bonus){
        this.balance = balance;
        this.bonus = bonus;
        this.number = number;
    }

    void store(int money){
        if(money > 0){
            this.balance += money;
            if(money >= 1000){
                this.bonus++;
            }
        }else{
            System.out.println("Input error!");
        }
    }

    void charge(int money){
        if(money > 0){
            if(money <= balance)
                this.balance -= money;
            else System.out.println("Money is not enough!");
        }else{
            System.out.println("Input error!!!");
        }
    }

    int exchange(int bonus){
        if(bonus > 0){
            this.bonus -= bonus;
        }
        return this.bonus;
    }
    public static void main(String []args){
        Cashapp[] cards = {
                new Cashapp("A001",500,0),
                new Cashapp("A002",300,0),
                new Cashapp("A003",1000,1)};

        for(Cashapp card:cards){
            card.store(100);
            System.out.printf("number = %s, balance = %d , bonus = %d\n",card.number,card.balance,card.bonus);
            card.charge(200);
            System.out.printf("number = %s, balance = %d , bonus = %d\n",card.number,card.balance,card.bonus);
        }
    }
}
