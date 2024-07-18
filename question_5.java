package practise;

import java.util.Scanner;

public class question_5 {

    public static void main(String[] args) {
        int number = 0, digits, sumKeDigits, sum = 0, newSum = 0;
        Scanner sc = new Scanner(System.in);
        number = sc.nextInt();
        while (number > 0) {
            digits = number % 10;
            sum = sum + digits;
            number /= 10;
        }
        while (sum > 0) {
            sumKeDigits = sum % 10;
            newSum += sumKeDigits;
            sum /= 10;
        }
        if (newSum == 1) {
            System.out.println("Lucky number ");
        } else {
            System.out.println("Unluck number " + sum);
            System.out.println("Unluck number " + newSum);

        }
    }
}
