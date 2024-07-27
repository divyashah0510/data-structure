package Java_Practise;

import java.io.File;
import java.util.Scanner;

public class question_6 {
    
    public static void main(String[] args) {
        try {
            File myfile = new File("C:\\Users\\DVOC-MR-01\\Documents\\NetBeansProjects\\practise\\src\\practise\\hi.txt");
            Scanner sc = new Scanner(myfile);
            System.out.println("Enter the name =");
            while (sc.hasNextLine()) {
                String data = sc.nextLine();
            }
            System.out.println("Provide me a name to be searched = ");
            String query = sc.nextLine();
            
        } catch (Exception e) {
            System.out.println("Error = " + e);
        }
    }
}
