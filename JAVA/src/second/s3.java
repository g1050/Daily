package second;

public class s3 {

    public static void main(String []args){
        int num = 10;
//        do{
//            num = (int)(Math.random()*10); //产生0-9的随机数字
//            System.out.println(num);
//        }while(num != 5);

        back:{
            for(int i = 0;i<10;i++){
                System.out.printf("i = %d\n",i);
                if(i == 5) break back;
            }
        }


        //break 和 continue 可以配合back使用，break跳出至back的位置，并且不执行back体，
        // continue的back只能设置到for循环之前，控制调到哪层for循环.
    }
}
