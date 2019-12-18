import java.util.Scanner;

public class x471{
    public static void main(String []args){
        int n  = 1000;
        int i = 0;
        String []str = new String [n];
        String s1;
        String s2;
        Scanner sc = new Scanner(System.in);

        for(i = 0;i<n;i++){
            str[i] = sc.next();    
            if(str[i].equals("end")) break;
        }

        s1 = sc.next();
        s2 = sc.next();
        
        for(int j = 0;j<i;j++){
            if(str[j].equals(s1)){
                System.out.print(s2);
            }else{
                System.out.print(str[j]);
            }
        
            
            if(str[j].charAt(str[j].length()-1) != '.' ){
                System.out.print(" ");
            }

        }
        System.out.println();

        // System.out.println("Hello java");
        
    } 
}
