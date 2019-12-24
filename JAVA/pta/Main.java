import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.Date;
import java.util.GregorianCalendar;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        GregorianCalendar gc=new GregorianCalendar();
        Scanner in=new Scanner(System.in);
        long millis=in.nextLong();
        long n = in.nextLong();
        n = millis+n*24*60*60*1000;

        gc.setTimeInMillis(millis);
        System.out.println(gc.get(Calendar.YEAR)+"-"+(gc.get(Calendar.MONTH)+1)+"-"+gc.get(Calendar.DAY_OF_MONTH));

        gc.setTimeInMillis(n);
        System.out.println(gc.get(Calendar.YEAR)+"-"+(gc.get(Calendar.MONTH)+1)+"-"+gc.get(Calendar.DAY_OF_MONTH));
    }   
}
