import java.util.Map;
import java.util.HashMap;
public class map{
    public static void main(String []args){
        Map <Integer,Integer> map = new HashMap<>();

        Integer i1 = new Integer(2);
        Integer i2 = new Integer(2);
        map.put(1,1);
        map.put(i1,i2);

        //遍历map的方法
        for(Map.Entry<Integer,Integer> entry: map.entrySet()){
            System.out.println("key:" + entry.getKey() + " value:" + entry.getValue());
        }

        //修改和删除元素
        map.replace(1,100);
        for(Map.Entry<Integer,Integer> entry: map.entrySet()){
            System.out.println("key:" + entry.getKey() + " value:" + entry.getValue());
        }

        map.remove(2);
        for(Map.Entry<Integer,Integer> entry: map.entrySet()){
            System.out.println("key:" + entry.getKey() + " value:" + entry.getValue());
        }

        Integer num = map.get(100);
        if(num == null)
            System.out.println("no such key");
        else System.out.println(num);
    }
}
