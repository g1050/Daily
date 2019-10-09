package second;

public class s4 {
    int gcd(int n,int m){
        if(m == 0) return n;
        return gcd(m,n%m);
    }

    void getRes(){
        for(int i = 100 ; i <=999;i++){
            int a = i%10,b = i/10%10,c = i/100;
            if(a * a * a + b*b*b + c*c*c == i){
                System.out.print("i = " + i + "\n");
            }
        }
        return ;
    }

    public static void main(String []args){
        s4 s = new s4();
        int res = s.gcd(1000,495);
        System.out.print("res = " + res +  "\n");
        s.getRes();
//        int a = 10;
//        while(a--){
//
//        }
    }
}
