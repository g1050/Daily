package four;


import java.util.Arrays;
import java.lang.*;
public class Array4_3 {

    int arr[][];

    void main01(String []args){
        int a[] = {1,2,3,4,5,6,7,8,9,10};
        int b[] = a;//数组也是对象,所以a,b参考至同一对象
//        for(int i = 0;i<a.length;i++){
//            System.out.println(a[i]);
//        }

        b[9] = 1001;
        //如果是遍历java中有加强语法
        for(int num : a){
            System.out.println( "num - " +  num);
        }
    }


    void main02(String []args){
        int a[][] = {{1,2,3},{4,5,6}};

//        for(int i = 0;i<a.length;i++){//获取行数
//            for(int j = 0;j<a[i].length;j++){//获取列数
//                System.out.printf("%2d",a[i][j]);
//            }
//            System.out.println();
//        }

        //遍历的话也存在加强语法
        for(int row[]: a){
            for(int num: row){
                System.out.printf("%2d",num);
            }
            System.out.println();
        }

    }

    void main03(String[] args){
        int a[] = new int[5];//默认初始值是0

        for(int num:a){
            System.out.println(num);
        }

        Arrays.fill(a,60);//相当于memset

        for(int num:a){
            System.out.println(num);
        }
    }

    void main04(String []args){
        //建立不规则数组
        int a[][] = new int[2][];
        a[0] = new int[3];
        a[1] = new int[4];

        for(int i = 0;i<a.length;i++){
            for(int j = 0;j<a[i].length;j++){
                a[i][j] = 10;
            }
        }

        for(int i = 0;i<a.length;i++){
            for(int j = 0;j<a[i].length;j++){
                System.out.printf("%3d",a[i][j]);
            }
            System.out.println();
        }

    }

    void main05(String []args){
        //Interger对象
        Integer a[] = new Integer[5];

        //Arrays.fill(a,10);
        //注意此时建立了0个对象,因为参考至null
//        for(int i = 0;i<a.length;i++){
//            System.out.println(a[i]);
//        }
        for(int i = 0;i<a.length;i++){
            a[i] = 10;//自动装箱
        }

        for(int i = 0;i<a.length;i++){
            System.out.println(a[i]);
        }


    }

    void main06(String []args){
        //数组是对象注意=不是赋值
        int a[] = {1,2,3,4,5};
        int b[] = Arrays.copyOf(a,a.length);//copyOf的第二个参数 表示的是新建立的数组长度如果数组
        //大小不够可以利用copOf转移到新的大数组中
        b[4] = 1001;

        for(int i = 0;i<a.length;i++){
            System.out.printf("%4d",a[i]);
        }
        System.out.println();

        for(int i = 0;i<b.length;i++){
            System.out.printf("%4d",b[i]);
        }
        System.out.println();
    }

    public static void main(String []args){
        //类类型的数组
        Clothes c[] = new Clothes[5];
        for(int i = 0;i<c.length;i++){
            c[i].set("Red",'L');
        }

        //Clothes c1 = new Clothes("red",'L');

    }
}

