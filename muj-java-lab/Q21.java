import java.util.Scanner;

class Rectangle {
    int length;
    int breadth;

    Rectangle(Scanner userInput) {
        System.out.println("Enter the Length of the Rectangle: ");
        this.length = userInput.nextInt();

        System.out.println("Enter the Breadth of the Rectangle: ");
        this.breadth = userInput.nextInt();
    }

    int area() {
        return this.length * this.breadth;
    }
}

public class Q21 {
    public static void main(String[] args) {
        Scanner userInput = new Scanner(System.in);

        Rectangle rec1 = new Rectangle(userInput);
        System.out.println("Area of First Rectangle: " + rec1.area());

        Rectangle rec2 = new Rectangle(userInput);
        System.out.println("Area of Second Rectangle: " + rec2.area());

        userInput.close();
        return;
    }
}
