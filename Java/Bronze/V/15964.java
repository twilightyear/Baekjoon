import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		long A,B;
		
		Scanner scanner = new Scanner(System.in);
		
		A = scanner.nextLong();
		B = scanner.nextLong();
		
		long result = (A+B)*(A-B);
		
		System.out.println(result);
	}
}
