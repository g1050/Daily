import java.util.Scanner;

public class x572{
    public static void main(String []args ){
        int n;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();

        int num[][] = new int[n][n];
        int row[] = new int[n];
        int col[] = new int[n];

        int j = 0;
        for(int i = 0;i<n;i++){
            for(j = 0;j < n;j++){
                num[i][j] = sc.nextInt();
                if(num[i][j] == 1){
                row[i]++;
                col[j]++;
                }

            }

        }

        int max_row = row[0];
        int max_col = col[0];
        for(int i = 0;i<n;i++){
            if(max_row < row[i])
                max_row = row[i];
            if(max_col < col[i])
                max_col = col[i];
        }

        System.out.print("Highest row: [");
        int flag = 0;
        for(int i = 0;i<n;i++){
            if(row[i] == max_row){
                if(flag == 1) System.out.print(",");
                flag = 1;
                System.out.print(i);
            }
        }
        System.out.println("]");

        flag = 0;
        System.out.print("Highest column: [");
        for(int i = 0;i<n;i++){
            if(col[i] == max_col){
                if(flag == 1) System.out.print(",");
                flag = 1;
                System.out.print(i);
            }
        }
        System.out.println("]");

    }
}
