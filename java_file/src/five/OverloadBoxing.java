package five;

class some
{
    int i ;
    static{
        System.out.println("位码加载后就会执行");
    }
    final int x;
    some(){
        x = 5;
        System.out.println("Hello ");
    }
    some(int i){
       this();
       i = i;
    }
    /*void someMethod(int i){
       System.out.println("int 版本被调用");
    }
    */ void someMethod(Integer integer) {
        System.out.println("Interger 版本被调用");
    }
}
public class OverloadBoxing {
    public static void main(String []args){
        some s = new some(1);
        s.someMethod(1);
        s.someMethod(new Integer(1));
    }

}
