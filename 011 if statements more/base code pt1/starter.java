import java.util.Scanner;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		Scanner sc = new Scanner (System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		
		if(a == b)
		{
			System.out.println("equal");
		}
		if(a != b)
		{
			System.out.println("different");
		}
	}
}
