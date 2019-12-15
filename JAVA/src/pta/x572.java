package pta;

import java.util.Scanner;

class student
{
	int score;
	String name;
}

public class x572 {
	
	public static void main(String []args) {
		
		int flag = 0,i = 0;
		student []stu  = new student[100];
		Scanner sc = new Scanner(System.in);

		for(;i<100;i++) {
			//stu[i].name = sc.next();
			if(stu[i].name.equals("noname")) {
				i--;
				break;
			}
			
			stu[i].score = sc.nextInt();
			
			
		}
		
		String tmp = sc.next();
		
		for(int j = 0;j<i;j++) {
			if(stu[j].name.equals(tmp)){
				System.out.println(0.21*stu[j].score);
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
 