public class Q15 {
    public static void main(String[] args) {
        int len = args.length;

        int[] sortedArray = new int[len];

        sortedArray[0] = Integer.parseInt(args[0]);
        for (int i = 1; i < len; i++) {
            int inputNum = Integer.parseInt(args[i]);

            int pos = 0;
            while (pos < i) {
                if (inputNum < sortedArray[pos]) {
                    break;
                }
                pos++;
            }

            while (pos <= i) {
                int temp = sortedArray[pos];
                sortedArray[pos] = inputNum;
                inputNum = temp;
                pos++;
            }
        }

        for (int i = 0; i < len; i++) {
            System.out.print(sortedArray[i] + " ");
        }
    }
}
