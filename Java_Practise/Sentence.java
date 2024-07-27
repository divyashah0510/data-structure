package Java_Practise;

import java.util.Arrays;
import java.util.Scanner;

public class Sentence {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a sentence =");
        String sentence = null;
        sentence = sc.nextLine();
        System.out.println(sentence);
        String words[] = sentence.split(" ");
        Arrays.sort(words);
        String sortedSentence = String.join(" ", words);
        System.out.println("Sorted sentence = " + sortedSentence);
    }
}
