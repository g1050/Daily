import java.util.*;
public class x674{
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        
        long sec = n/1000;
        long min = sec/60;
        long hour = min/60;

        sec %= 60;
        min %= 60;

        System.out.println(hour + ":" + min + ":" + sec);
   }
}
