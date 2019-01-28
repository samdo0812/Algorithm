import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		
		String str =scan.next();
		
		for (int i = 0; i < str.length(); ++i) {
			System.out.print(str.charAt(i));
			if(i%10==9) {
				System.out.println();
			}
		}
		scan.close();
	}
}