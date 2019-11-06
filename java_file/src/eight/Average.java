package eight;

import java.util.InputMismatchException;
import java.util.Scanner;
import static java.lang.System.*;

public class Average {
    public static void main(String []args){
        Scanner sc = new Scanner(in);
        double sum = 0;
        int count = 0;
        while(true) {
            try {
                int number = sc.nextInt();
                if (number == 0) {
                    break;
                }
                sum += number;
                count++;
            } catch (InputMismatchException ex) {
                out.printf("略过非整数输入%s\n", sc.next());
            }

        }
        out.printf("平均:%.2f\n",sum / count);
    }
}
