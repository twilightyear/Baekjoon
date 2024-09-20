import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int cnt = scanner.nextInt();
		int result=0;
		
		for(int i=0;i<cnt;i++) {
			result+=scanner.nextInt();
		}
		
		System.out.println(result);

	}

}
