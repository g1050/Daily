
import java.util.Scanner;

public class x572 {
	
	public static void main(String []args) {
		
		int flag = 0,i = 0;
		String  []name  = new String[100];
        int []score = new int[100];

		Scanner sc = new Scanner(System.in);

    
		for(;i<100;i++) {
			name[i] = sc.next();

			if(name[i].equals("noname")) {
				i--;
				break;
			}
			
			score[i] = sc.nextInt();
			
			
		}
		
		String tmp = sc.next();
		
		for(int j = 0;j<i;j++) {
			if(name[j].equals(tmp)){
				System.out.println(0.21*score[j]);
				flag = 1;
				break;
			}
		}
		
		if(flag != 1) {
			System.out.print("Not found.");
		}
		
		return ;
	}
}
 
