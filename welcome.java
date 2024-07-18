package practise;

public class welcome {
    public static void main(String[] args) {
        String sentence = "WELCOME";
        String words[] = sentence.split("");
        for (int i = 0; i <= sentence.length(); i++) {
            for (int j = 0; j < i; j++) {
                System.out.print(words[j]);
            }
            System.out.println();
        }
    }
}
