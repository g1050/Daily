import java.util.*;
public class x672{
    public static void main(String[] args){
        int n1 = 0,n2 = 0;

        Scanner sc = new Scanner(System.in);
        while(true){
            try{
                n1 = sc.nextInt();
                n2 = sc.nextInt();
                System.out.println("Sum is " + (n1+n2));
            }catch(InputMismatchException e){
                sc.nextLine();
                System.out.println("Incorrect input and re-enter two integers:");
                continue;
            }
            break;
        }
    }
}
