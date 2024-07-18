package practise;

public class Practise {

    public static void main(String[] args) {
        int sum = 0;
        for (int i = 1; i <= 15; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print(j + " ");
                sum = sum + j;
            }
            System.out.println();
        }
        System.out.println("The sum is = " + (sum - 1));
    }
}
