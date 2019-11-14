package eight;

class aa{
    static int g(int i){
        static int b  = 0;
    }

    aa(){
        a = 6;
    }
    public void f(){

        System.out.println("Hello");
    }

     public static int num = 5;

    protected int a = 5;
}

class bb extends aa{
    @Override
    static int g(int i ){
        System.out.print("Hello");
    }
}

public class pro {
    public static void main(String []args){
        aa tmp = new aa();
        aa tmp2 = new aa();
        tmp.num = 10;

        tmp2.num = 20;


        System.out.print(tmp.num);
    }
}
