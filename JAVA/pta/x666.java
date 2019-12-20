import java.util.*;
public class x666{
    public static void main(String []args){
        String s1 = "Hello";
        String s2 = "Hell" + "o";
        String s3 = "Hell";
        s3 = s3 + "o";

        if(s1 == s2){
            System.out.println("s1 == s2");
        }

        if(s1 == s3){
            System.out.println("s1 == s3");
        }
    }
}
