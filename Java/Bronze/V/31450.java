import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		long m,k;
		m = scanner.nextLong();
		k = scanner.nextLong();
		
		if(m%k==0) {
			System.out.println("Yes");
		} else {
			System.out.println("No");
		}
		
		

	}

}
