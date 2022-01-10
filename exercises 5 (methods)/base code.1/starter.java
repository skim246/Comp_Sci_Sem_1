import java.util.Scanner;
import java.util.Random;

class starter {
	
	public static int methods(int a, int b){
		int x = a;
		int y = b;
		int combined = a*b;
		if(combined%3 == 0){
			System.out.println(combined);
		}
		
		return combined; 
	}
	
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		Scanner sc = new Scanner(System.in);
		System.out.println("Input a number.");
		int a = sc.nextInt();
		System.out.println("Input another number.");
		int b = sc.nextInt();
		
		methods(a,b);
		
	}
}
