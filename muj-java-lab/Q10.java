public class Q10 {
    public static void main(String[] args) {
        int num = Integer.parseInt(args[0]);

        int revNum = 0;
        while (num > 0) {
            revNum *= 10;
            revNum += num % 10;
            num /= 10;
        }
        System.out.println(revNum);
    }
}
