import java.util.Scanner;
public class Main {
	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);
		int N = scan.nextInt();

		if(N>=3 &N<=5000) {	
			if(N%5==0) {
				System.out.println(N/5);
				return;
			}else {
				int num5 = N/5;
				for(int i = num5; i>0; i--){
					int left = N - i * 5;
					if(left % 3 == 0){
						int num3 = left / 3;
						System.out.println(num3+i);
						return;
					}else
						continue;
				}

			}
		}
		if(N%3 ==0) {
			System.out.println(N/3);
		}else { 
			System.out.println(-1);
		}return;
	}
}