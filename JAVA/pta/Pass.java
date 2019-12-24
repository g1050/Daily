import java.util.*;


public class Pass{    

     static int j = 20;
     public void amethod(int x){
         x = x*2;
         j = j*2;
    }
    public static void main(String args[]){
        int i = 10;	   
        Pass p = new Pass();
        p.amethod(i);
        System.out.println(i+" and "+j); 
  }
}
