package four;

import java.util.Scanner;
public class string {
    void main01(String []args){
        String name = "justin";
        System.out.println(name);
        System.out.println("length = " + name.length());
        System.out.println(name.charAt(0));
        System.out.println(name.toUpperCase());

    }

    void main02(String []args){
        char arr[] = {'j','s','t','i','n'};
        String name = new String(arr);
        System.out.println(name);
        char arr2[] = name.toCharArray();
        System.out.println(arr2[0]);

    }
    void main03(String []args){
        //P109设置主方法的参数
        Scanner sc = new Scanner(System.in);
        long sum = 0;
        long number = 0;
        do{
            System.out.print("Please input the number:");
            number = Long.parseLong(sc.nextLine());
            sum += number;
        }while(number != 0);

        System.out.println("sum = " + sum);
    }
    void main04(String []args){
        //字符串常量与字符串池
        //以""包括的字符串只要内容相同，无论出现几次，jvm只建立一个String实例，并且在字符串池中维护
        String name1 = "justin";
        String name2 = "justin";
        String name3 = new String(name1);
        String name4 = new String(name2);
        System.out.println(name1 == name2);
        System.out.println(name1 == name3);
        System.out.println(name1.equals(name3));
    }

    void main05(String []args){
        //StringBuilder对象
        StringBuilder builder = new StringBuilder();
        for(int i = 1;i < 100;i++){
            builder.append(i).append("+");
        }
        System.out.println(builder.append(100).toString());
    }

    void main06(String []args){
        int x = 100;
        int y = 100;
        Integer wx = x;
        Integer wy = y;
        System.out.println(x == wx);
        System.out.println(y == wy);
    }

    void main07(String []args){
        Scanner sc = new Scanner(System.in);
        int a[] = new int[1000];
        a[0] = 0;
        a[1] = 1;
        for(int i = 2;i<1000;i++){
            a[i] = a[i-1] + a[i-2];
        }

        System.out.print("Plase input n:");
        int n = sc.nextInt();
        for(int i = 0;i<n;i++){
            System.out.print(a[i] + " ");
        }
    }

    //简单自动洗牌程序?
}
