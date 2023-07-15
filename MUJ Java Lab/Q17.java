import java.util.Scanner;

public class Q17 {
    public static void main(String[] args) {
        Scanner userInput = new Scanner(System.in);

        System.out.print("Enter the Marks: ");
        int marks = userInput.nextInt();

        if (marks > 60) {
            System.out.println("1st Class");
        } else if (marks > 50) {
            System.out.println("2nd Class");
        } else if (marks > 40) {
            System.out.println("Pass");
        } else {
            System.out.println("Fail");
        }

        userInput.close();
    }
}
