package seven;

import java.util.Scanner;
import static java.lang.System.*;

public class q2 {
    static String s1,s2;
    static char str1[];
    static char str2[];
    public static void main(String []args){
        input();
        getString();
    }

    public static void input(){
        Scanner sc = new Scanner(in);
        s1 = sc.next();
        s2 = sc.next();

        //out.println(s1);
        //out.println(s2);
    }

    public static void getString(){
        int len1 = s1.length();
        int len2 = s2.length();
        int t1 = len1--;
        int t2 = len2--;

        str1 = s1.toCharArray();
        str2 = s2.toCharArray();

        while(str1[len1] == str2[len2]){
            len1--;
            len2--;
        }

        len1++;

        if(len1 == t1){
            out.println("No common suffix.");
        }else{
            out.print("The common suffix is ");
            for(int i = len1;i<t1;i++){
                out.print(str1[i]);
            }
            out.print(".\n");
        }

    }

}
