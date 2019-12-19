import java.util.*;
public class x671{
    public static void main(String []args){
       Scanner sc = new Scanner(System.in);

       String str = sc.next();

       char s[]  = str.toCharArray();
       Arrays.sort(s);
       str = String.copyValueOf(s);

       System.out.println(str);
    }
}
