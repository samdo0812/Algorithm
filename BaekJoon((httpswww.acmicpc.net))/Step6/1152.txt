import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
        String input = scan.nextLine().trim();
        scan.close();
         
        if (input.isEmpty()) {
            System.out.println(0);
        } else {
            System.out.println(input.split(" ").length);
        }
		
	}
}
