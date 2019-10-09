package four;

import java.util.Scanner;

public class f2 {
    public static void  main(String []args){
        int gus;
        Scanner sc = new Scanner(System.in);
        int num = (int)(Math.random()*10);//产生0-9的随机数字
        do{
            System.out.println("猜数字(0-9):");
            gus = sc.nextInt();
        }while(gus != num);

        System.out.println("猜中啦~");

        /*
        //Scanner中的各种方法
        sc.nextDouble();
        sc.nextInt();
        sc.nextByte();
        sc.nextShort();
        sc.nextLong();
        sc.nextFloat();
        sc.nextBoolean();

        sc.next();//以空格或者换行结束
        sc.nextLine();//以换行结束
         */
    }
}
