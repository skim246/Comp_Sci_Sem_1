import java.util.Scanner;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		Scanner sc = new Scanner (System.in);
		
		System.out.println("What is your first name?");
		String color = sc.nextLine(); 
		
		System.out.println("What is your age?");
		int age = sc.nextInt();
		
		System.out.println("what is your birthday month?");
		String month = sc.nextLine();
		
		sc.nextLine();
		
		System.out.println("What is your birthday year?");
		int year = sc.nextInt();
		
		System.out.println("What is your birthday day?");
		int day = sc.nextInt();
		
		System.out.println("How much is a buck fifty?");
		double buck = sc.nextDouble();
		
		}
	}
