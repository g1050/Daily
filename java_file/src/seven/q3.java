package seven;

import java.util.Calendar;
import java.util.GregorianCalendar;
import java.util.Scanner;
import static java.lang.System.*;

public class q3 {
    public static void main(String []args){
        Scanner sc = new Scanner(in);
        GregorianCalendar g = new GregorianCalendar();
        g.setTimeInMillis(sc.nextLong());
        out.print(g.get(Calendar.YEAR)+"-"+g.get(Calendar.MONTH) + "-" + g.get(Calendar.DATE));
    }
}
