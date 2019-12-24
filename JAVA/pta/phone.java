import java.util.*;

public class phone{
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        Map<String,String> map = new HashMap<>();

        while(true){
            String name = sc.next();
            if(name.equals("noname")){
                break;
            }
            String ph = sc.next();
            map.put(name,ph);
        }

        String name = sc.next();
        String ph = map.get(name); 
        if(ph == null)
            System.out.println("Not found.");
        else{
            System.out.println(ph);
        }
    
    }
}
