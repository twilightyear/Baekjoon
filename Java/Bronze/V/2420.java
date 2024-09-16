import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		long N = scanner.nextLong();
		long M = scanner.nextLong();
		
		if(N-M<0) {
			System.out.println(M-N);
		} else {
			System.out.println(N-M);
		}

	}

}
