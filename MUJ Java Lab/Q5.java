public class Q5 {

  public static void main(String[] args) {
    if (args.length == 0) {
      System.out.println("Please provide some arguments");
      return;
    }

    int sum = 0;
    for (int i = 0; i < args.length; i++) {
      sum += Integer.parseInt(args[i]);
    }
    System.out.println("Addition: " + sum);

    int difference = Integer.parseInt(args[0]);
    for (int i = 1; i < args.length; i++) {
      difference -= Integer.parseInt(args[i]);
    }
    System.out.println("Substraction: " + difference);

    int product = 1;
    for (int i = 0; i < args.length; i++) {
      product *= Integer.parseInt(args[i]);
    }
    System.out.println("Multiplication: " + product);

    float quotient = (float) Integer.parseInt(args[0]);
    for (int i = 1; i < args.length; i++) {
      quotient /= (float) Integer.parseInt(args[i]);
    }
    System.out.println("Division: " + quotient);
  }
}
