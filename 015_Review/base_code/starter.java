import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		Scanner sc = new Scanner(System.in);
		System.out.println("What is your name?");
		String a = sc.nextLine();
		
		System.out.println("What is your title? Ex: Slayer of Dragons");
		String c = sc.nextLine();
		
		System.out.println("Would you like to be a Wizard, Warrior, or Rogue?");
		String b = sc.nextLine();
		if((b.equals("Wizard")) || (b.equals("wizard")))
		{
			System.out.println("You've chosen the Wizard! Exelsior!");
		}
		if((b.equals("Warrior")) || (b.equals("warrior")))
		{
			System.out.println("You've chosen the Warrior! For honor!");
		}
		if((b.equals("Rogue")) || (b.equals("rogue")))
		{
			System.out.println("You've chosen the Rogue! How cunning!");
		}
		
		System.out.println();
		System.out.println("You have 25 points to spend in the following: Strength, Dexterity, Intelligence, Constitution, and Charisma. Spend them wisely.");
		System.out.println();
		System.out.println("Strength (1-10):");
		int d = sc.nextInt();
		int dd = sc.nextInt();
		int e = 25 - d;
		if(d > 10)
		{
			System.out.print("Please input a smaller value. Strength (1-10):");
		}
		else
		{
			System.out.print("You have ");
			System.out.print(e);
			System.out.println(" left to spend.");
			System.out.println();
			System.out.println("Dexterity (1-10):");
		}
		if(e < 0)
		{
			System.out.println("Please input a smaller value. Strength (1-10):");
		}
		
		int f = sc.nextInt();
		int g = e - f;
		if(f > 10)
		{
			System.out.println("Please input a smaller value. Dexterity (1-10):");
		}
		if(g < 0)
		{
			System.out.println("Please input a smaller value. Dexterity (1-10):");
		}
		System.out.print("You have ");
		System.out.print(g);
		System.out.println(" left to spend.");
		System.out.println();
		System.out.println("Intelligence (1-10):");
		int h = sc.nextInt();
		int i = g - h;
		if(h > 10)
		{
			System.out.println("Please input a smaller value. Intelligence (1-10):");
		}
		if(i < 0)
		{
			System.out.println("Please input a smaller value. Intelligence (1-10):");
		}
		System.out.print("You have ");
		System.out.print(i);
		System.out.println(" left to spend.");
		System.out.println();
		System.out.println("Constitution (1-10):");
		int j = sc.nextInt();
		int k = i - j;
		if(j > k)
		{
			System.out.println("Please input a smaller value. Constitution (1-10):");
		}
		if(k < 0)
		{
			System.out.println("Please input a smaller value. Constitution (1-10):");
		}
		System.out.print("You have ");
		System.out.print(k);
		System.out.println(" left to spend.");
		System.out.println();
		System.out.println("Charisma (1-10):");
		int l = sc.nextInt();
		int m = k - i;
			if(l > 10)
		{
			System.out.println("Please input a smaller value. Charisma (1-10):");
		}
		if(m < 0)
		{
			System.out.println("Please input a smaller value. Charisma (1-10):");
		}
		System.out.print("You have ");
		System.out.print(m);
		System.out.println(" to spend for next time.");
		System.out.println();
		
		System.out.println("--------------------------------------------------");
		System.out.print("You are ");
		System.out.print(a);
		System.out.print(", the ");
		System.out.print(c);
		System.out.println(" of CVHS.");
		System.out.print("You're a ");
		System.out.print(b);
		System.out.println(" with the following stats!");
		
		System.out.print("Strength - ");
		System.out.println(d);
		
		System.out.print("Dexterity - ");
		System.out.println(f);
		
		System.out.print("Intelligence - ");
		System.out.println(h);
		
		System.out.print("Constitution - ");
		System.out.println(j);
		
		System.out.print("Charisma - ");
		System.out.println(l); 
		
		System.out.println();
		
		System.out.print("Good luck on your Quest ");
		System.out.print(a);
		System.out.print(" !");
	}
}
