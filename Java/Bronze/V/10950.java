import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		int cnt = scanner.nextInt();
		
		for(int i=0;i<cnt;i++) {
			int a = scanner.nextInt();
			int b = scanner.nextInt();
			
			System.out.println(a+b);
		}

	}
}
