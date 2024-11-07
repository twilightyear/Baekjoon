import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int cnt = scanner.nextInt();
		int a,x,b;
		
		for(int i=0;i<cnt;i++) {
			a = scanner.nextInt();
			b = scanner.nextInt();
			x = scanner.nextInt();
			
			System.out.println(a*(x-1)+b);
		}
		
		

	}

}
