package Six;

import java.util.Scanner;
import static java.lang.System.*;

public class Guest {
    public static void main(String []args){
        ArraList names = new ArraList();
        collectNameTo(names);
        out.println("访客名单");
        printUpperCase(names);
    }

    static void collectNameTo(ArraList names){
        Scanner sc = new Scanner(in);
        while(true){
            out.print("访客名称:");
            String name = sc.nextLine();
            if(name.equals("quit")){
                break;
            }
            names.add(name);
        }
    }

    static void printUpperCase(ArraList names){
        for(int i = 0;i<names.size();i++){
            String name = (String)names.get(i);
            out.println(name.toUpperCase());
        }
    }
}

