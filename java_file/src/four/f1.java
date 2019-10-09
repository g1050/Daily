package four;

public class f1 {

    public static void main(String []args){

        //建立clothes实例
        Clothes sun = new Clothes("Red",'M');//新建对象时候有构造函数必须调用构造函数
        Clothes spring = new Clothes("Black",'L');

        //为每个对象的成员赋初始值
//        sun.color = "red";
//        sun.size = 'M';
//        spring.color = "black";
//        spring.size = 'L';

        //显示每个对象的属性
        System.out.println("sun: color " + sun.color +" " +  "size " + sun.size);
        System.out.println("spring: color " + spring.color +" " +  "size " + spring.size);

    }
}
class Clothes{
    String color;
    char size;
    //定义构造函数为某个对象赋初始值
    Clothes(String color,char size){
        this.size = size;
        this.color = color;
    }
}