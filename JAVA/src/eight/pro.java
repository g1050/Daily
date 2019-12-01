package eight;


class aa
{

    aa(){
       System.out.print("123");
    }
    aa(int a){

    }
}
class bb extends aa {
    bb(){
        System.out.print("234");
    }
}
public class pro {
    public static void main(String []args){
        bb b  = new bb();
    }
}
