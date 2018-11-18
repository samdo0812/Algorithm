import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		
		int N = scanner.nextInt();
		int X = scanner.nextInt();
		
		int[] a = new int[N];
		for (int i = 0; i < a.length; i++) {
			a[i] = scanner.nextInt();
		}
		scanner.close();
		
		for (int i = 0; i < a.length; i++) {
			if(a[i]<X) {
				System.out.println(a[i]+"");
			}
		}
		
	}
}
