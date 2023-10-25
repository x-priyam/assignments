public class Q9 {
    public static void main(String[] args) {
        // Set to args[0], using args[3] for lauch.json config
        int numTerms = Integer.parseInt(args[3]);

        System.out.println("The Fibbionaci Series till " + numTerms + " terms:");

        int nTerm, nMinusOneTerm = 0, nMinusTwoTerm = 0;
        while (numTerms > 0) {
            nTerm = nMinusOneTerm + nMinusTwoTerm;
            System.out.print(nTerm + " ");
            nMinusTwoTerm = nMinusOneTerm;
            nMinusOneTerm = nTerm;
            if (nMinusOneTerm == 0) {
                nMinusTwoTerm = 1;
            }
            numTerms--;
        }
    }
}
