import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int a,b,result;
		int n = scanner.nextInt();
		for(int i=0;i<n;i++) {
			a = scanner.nextInt();
			b = scanner.nextInt();
			result = a+b;
			
			
			System.out.println("Case " + (i+1) + ": " + result);
		}

	}

}
