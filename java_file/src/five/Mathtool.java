package five;

import static java.lang.System.*;
public class Mathtool {
    int getSum(int... nums){
        int sum = 0;
        for(int num:nums){
            sum += num;
        }
        return sum;
    }
    public static void main(String []args){
       Mathtool m = new Mathtool();
       out.println(m.getSum(1,2,3,4));
       out.println(m.getSum(1,2,3));

    }
}
