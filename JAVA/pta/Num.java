import java.util.*;
public class Num{
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        int flag = 1;
        String s = sc.next();

        if(s.length() != 11 ){
            System.out.println("No");
            return ;
        }

        for(int i = 0;i<s.length();i++){
            if(!Character.isDigit(s.charAt(i))){
                System.out.println("No");
                return ;
            }
        }

        if(s.charAt(0) != '1'){
            System.out.println("No");
            return ;
        }

        System.out.println("Yes");
    }
}
