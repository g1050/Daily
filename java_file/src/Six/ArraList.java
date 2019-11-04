package Six;

import java.util.Arrays;

public class ArraList {
    private Object[] list;//使用Object收集 所有类都是Object的子类
    private int next; //下一个可存储对象的索引

    public ArraList(int capacity){
        list = new Object[capacity];
    }

    public ArraList(){
        this(16);
    }

    public void add(Object o){
        if(next == list.length){
            list = Arrays.copyOf(list,list.length*2);
        }
        list[next++] = o;
    }

    public Object get(int index){
        return list[index];
    }

    public int size(){
        return next;
    }

    public static void main(String []args){
        return ;
    }

}
