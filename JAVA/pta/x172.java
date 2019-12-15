import java.util.*;
public class main{
    public static void main(String []args)
    {
        Scanner in=new Scanner(System.in);
        //Scanner in1=new Scanner(System.in);
        Map<String,Double> m=new HashMap<String,Double>();
         String s;
         double n;
         s=in.next();
         while(s.compareTo("noname")!=0)
         {
             n=in.nextDouble();
             m.put(s, n);
             s=in.next();
         }
         s=in.next();
              if(m.get(s)!=null)
                System.out.println(m.get(s).intValue()*0.21);   
              else
                  System.out.println("Not found.");
              in.close();
    }
}

