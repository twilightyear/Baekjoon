import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		long result=1;
		long n = scanner.nextLong();
		
		for(int i=1;i<=n;i++) {
			result*=i;
		}
		
		System.out.println(result);
		
	}
}
