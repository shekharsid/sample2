import java.util.Random;
import java.util.Scanner;

public class Problems {

    // Random number guessing game
    public static void main(String[] args) {
        Random rand = new Random();
        int numberToGuess = rand.nextInt(100) + 1;
        Scanner scanner = new Scanner(System.in);
        int guess;
        boolean hasGuessedCorrectly = false;

        System.out.println("Guess a number between 1 and 100.");

        while (!hasGuessedCorrectly) {
            System.out.print("Enter your guess: ");
            guess = scanner.nextInt();

            if (guess < numberToGuess) {
                System.out.println("Too low!");
            } else if (guess > numberToGuess) {
                System.out.println("Too high!");
            } else {
                System.out.println("You got it!");
                hasGuessedCorrectly = true;
            }
        }
        scanner.close();
    }
}
