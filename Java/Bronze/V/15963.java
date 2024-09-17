import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		long N = scanner.nextLong();
		long M = scanner.nextLong();
		long result;
		
		if(N==M) {
			result = 1;
		} else {
			result = 0;
			
		}
		
		
		System.out.println(result);
	}

}
