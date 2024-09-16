import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int N = scanner.nextInt();
		int M = scanner.nextInt();
		
		if(N-M<0) {
			System.out.println(M-N);
		} else {
			System.out.println(N-M);
		}

	}

}
