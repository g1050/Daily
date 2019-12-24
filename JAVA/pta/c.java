import java.util.*;
public class c{
    public static void main(String []args){
        int cnt = 2;
        Scanner sc = new Scanner(System.in);
        Map <String,String> map = new TreeMap<String,String>(
                new Comparator<String>() {
                    public int compare(String obj1, String obj2) {
                        return obj1.compareTo(obj2);
                    }
                });        


        while(cnt != 0){
            String name = sc.next();
            if(name.equals(name)){
                cnt--;
                continue;
            }
            String number = sc.next();

            map.put(name,number);
        }
        System.out.println("Hello java");

         for(Map.Entry<String,String> entry: map.entrySet()){
            System.out.println(entry.getKey()  + entry.getValue());
        }

    }

}
