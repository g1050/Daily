package Six;

//设计模式
import java.util.Scanner;
import static java.lang.System.*;
public abstract class guess {
    public void go(){
        int number = (int)(Math.random()*10);
        int guess;
        do{
            print("输入数字");
            guess = nextInt();
        }while(guess != number);
        print("恭喜猜中了!");
    }

    public abstract void  print(String text);
    public abstract int nextInt();
}

class guess2 extends guess {

    private Scanner sc = new Scanner(in);

    @Override
    public void print(String text){
        out.println(text);
    }

    @Override
    public int nextInt(){
        return sc.nextInt();
    }

    public static void main(String []args){
        guess2 g2 = new guess2();
        g2.go();
    }
}
