package seven;

public class Action{
    public static void main(String []args){

    }
}

interface Act{
    void excute();
}

class Tmp implements Act{
    public void excute(){
        System.out.println("做一些动作");
    }
}


