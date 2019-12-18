import java.util.Scanner;

public class x571{
    public static void main(String[] args){
        int n,m;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        m = sc.nextInt();

        double num[][] = new double[n][m];

        for(int i = 0;i<n;i++){
            for(int j =  0;j < m;j ++ ){
                num[i][j] = sc.nextDouble();
            }
        }

        double max = num[0][0];
        int x = 0,y = 0;
        for(int i = 0;i<n;i++){
            for(int j  = 0;j<m;j++){
                // System.out.println(num[i][j]);
                if(num[i][j] > max){
                    max = num[i][j];
                    x = i;
                    y = j;
                }
            }
        }

		System.out.println("The location of the largest element is "+max+" at ("+x+", "+y+")");
        return ;
    }
    
}
