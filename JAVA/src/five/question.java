package five;

import static java.lang.System.*;
public class question {
    void main01(String[]args){
        Some s = Some.create();
    }
    public static void main(String []args){
        q4 q = new q4(10);
        out.println(q.x);
        q4.getSum(1,2,3);
    }
}

class q4{
    public int x;
    public q4(int x){
        x = x;
    }
    public static int getSum(int ... nums){
        int sum = 0;
        for(int i = 0;i<nums.length;i++){
            sum += nums[i];
        }
        return sum;
    }
}
class Some{
    private Some(){};
    private Some some;
    public static Some create(){
        /*
        if(some == null){
            some = new Some();
        }
        */

        Some some = new Some();
        return some;
    }
}
