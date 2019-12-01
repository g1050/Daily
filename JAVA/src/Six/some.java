package Six;
import static java.lang.System.*;
public class some {
    some(){
        out.println("调用 some");
    }

    some(int i){
        out.println("调用 some2");
    }
    public static void main(String []args){
        other o = new other();
    }

}

class other extends some{
    other(){
        //子类中的构造函数第一行默认执行父类中的构造函数
        super(10);
        out.println("调用 other");
    }
}
