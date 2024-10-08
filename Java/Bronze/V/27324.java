import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int N = scanner.nextInt();
		
		if(N%10==N/10) {
			System.out.println(1);
		} else {
			System.out.println(0);
		}
		

	}

}
