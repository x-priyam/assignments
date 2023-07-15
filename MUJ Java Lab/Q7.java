public class Q7 {
    public static void main(String[] args) {
        // Set to args[0], using args[3] for lauch.json config
        int num = Integer.parseInt(args[3]);

        int fact = 1;
        while (num > 1) {
            fact *= num;
            num--;
        }

        System.out.println("Factorial: " + fact);
    }
}
