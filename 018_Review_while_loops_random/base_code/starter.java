import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// Your code goes below here
	Random rand = new Random();
	int secret = rand.nextInt(1000);
	Scanner sc = new Scanner(System.in);
	
	while(true)
	{
		System.out.print("Guess a number: ");
		int guess = sc.nextInt();
		if(guess < secret)
		{
			System.out.println("You're a little too low!");
			System.out.println();
		}
		if(guess > secret)
		{
			System.out.println("You're a little too high!");
			System.out.println();
		}
		if(guess == secret)
		{
			System.out.println("You guessed it!");
			break;
		}
			
	}

		
	}
}
