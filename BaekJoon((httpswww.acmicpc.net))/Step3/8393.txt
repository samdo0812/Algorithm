import java.util.Scanner;

public class Main {
	public static void main(String[] args) {

	
		Scanner scan = new Scanner(System.in);
		int i = scan.nextInt();
		int sum = 0;
		
		for (int j = 1; j <= i; j++) {
			 sum += j;
		}
		System.out.println(sum);
	}
}