import java.util.*;
public class x673{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();

        GregorianCalendar gregoriancalendar = new GregorianCalendar();
        gregoriancalendar.setTimeInMillis(n);
        System.out.println(gregoriancalendar.get(Calendar.YEAR) + "-" + (gregoriancalendar.get(Calendar.MONTH)) + "-" + gregoriancalendar.get(Calendar.DAY_OF_MONTH));
    }
}
