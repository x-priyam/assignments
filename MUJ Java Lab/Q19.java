import java.util.Scanner;

public class Q19 {

  public static void main(String[] args) {
    Scanner userInput = new Scanner(System.in);

    System.out.println("Enter the string:");
    String text = userInput.nextLine();

    String[] words = text.split(" ");

    for (int i = 0; i < words.length; i++) {
      for (int j = 0; j < words[i].length(); j++) {
        if (!Character.isLetter(words[i].charAt(j))) {
          words[i] = new String(
              words[i].replace(Character.toString(words[i].charAt(j)), ""));
        }
      }
    }

    int[] counter = new int[words.length];

    for (int i = 0; i < words.length; i++) {
      counter[i] = 0;
      for (int j = 0; j <= i; j++) {
        if (words[i].equals(words[j])) {
          counter[j]++;
          break;
        }
      }
    }

    System.out.println("Number of occurences of each words:");
    for (int i = 0; i < words.length; i++) {
      if (counter[i] != 0) {
        System.out.println(words[i] + ": " + counter[i]);
      }
    }

    userInput.close();
  }
}
