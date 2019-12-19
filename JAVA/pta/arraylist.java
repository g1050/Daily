import java.util.ArrayList;
import java.util.Iterator;
public class arraylist{
    public static void main(String[] args){

        int n = 10;
        ArrayList<Integer> list = new ArrayList<Integer>();

        for(int i = 0;i<n;i++){
            list.add(i);
        }

        //遍历方法1，通过索引值访问
        System.out.println("--------------------------------------");
        for(int i = 0;i<n;i++){
            System.out.println(list.get(i));
        }
        System.out.println("--------------------------------------");
        
        list.remove(7);
        //remove元素之后size自动减少1
        
        System.out.println("--------------------------------------");
        for(int i = 0;i<list.size();i++){
            Integer num = list.get(i);
            if(num != null){
                System.out.println(num);
            }
        }
        System.out.println("--------------------------------------");

        //只读的方式遍历
        for(Integer i:list){
            System.out.println(i);
        }
        System.out.println("--------------------------------------");
        //通过迭代器遍历
        for(Iterator it = list.iterator();it.hasNext();){
            System.out.println(it.next());
        }


        System.out.println("Hello java");
    }
}
