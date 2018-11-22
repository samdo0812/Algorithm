import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
        char input = scan.nextLine().charAt(0);
        scan.close();
         
        int asc = (int)input;
        System.out.println(asc);
	}
}
