package four;
//基本类型打包器 Wrappe [ˈræpə(r)]
public class IntergerDemo {
    public static void main(String []args){
        int data1 = 10;
        int data2 = 20;
        Integer w1 = new Integer(data1);
        Integer w2 = new Integer(data2);//打包基本类型
        System.out.println(data1/3);
        System.out.println(w1.doubleValue()/3);
        System.out.println(w1.compareTo(w2));
        //compaerTo相比== != 返回更多信息 0 1 -1
    }
}
