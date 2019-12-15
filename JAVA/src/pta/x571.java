package pta;

import java.util.Arrays;
import java.util.Scanner;

public class x571 {
	public static void main(String []args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		
		String []str = new String[n];
		for(int i = 0;i<n;i++) {
			str[i] = sc.next();
		}
		 
		Arrays.parallelSort(str);
		for(String s:str) {
			System.out.println(s);
		} 
		
		sc.close();
		return ;
	}
}
