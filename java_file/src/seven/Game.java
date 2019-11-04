package seven;

import java.util.Scanner;

import static java.lang.System.*;

public class Game implements  Actionn{

    public static void main(String []args){
        Scanner sc = new Scanner(in);
        while(true){
            int action = sc.nextInt();
            if(action == -1) break;
            else play(action);
        }
    }

    static void play(int action){
        switch(action){
            case STOP:
                out.println("STOP!");
                break;
            case RIGHT:
                out.println("RIGHT!");
                break;
            case LEFT:
                out.println("LEFT");
                break;
            case UP:
                out.println("UP!");
                break;
            case DOWN:
                out.println("DOWN!");
                break;
        }
    }
}


//枚举常数
interface Actionn{
    public static final int STOP = 0;
    public static final int RIGHT = 1;
    public static final int LEFT = 2;
    public static final int UP = 3;
    public static final int DOWN = 4;
}