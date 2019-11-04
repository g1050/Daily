package seven;

import java.util.Scanner;
import static java.lang.System.*;
public class q1 {
    public static void main(String []args){
        Str S = new Str();
        S.input();
    }
}

class Str{
    String [] str = new String[5];
    public void input(){
        Scanner sc = new Scanner(in);
        for(int i = 0;i<str.length;i++){
            str[i] = sc.next();
        }

        for(String s:str){
            out.println(s);
        }


    }
}