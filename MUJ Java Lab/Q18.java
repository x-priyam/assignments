public class Q18 {
    public static void main(String[] args) {
        int year = Integer.parseInt(args[0]);

        if (year % 4 != 0) {
            System.out.println("Not a leap year");
            return;
        }

        if (year % 100 == 0 && year % 400 != 0) {
            System.out.println("Not a leap year");
            return;
        }

        System.out.println("Leap Year");
    }
}
