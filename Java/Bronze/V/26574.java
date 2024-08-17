import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		int cnt;
		
		Scanner scanner = new Scanner(System.in);
		cnt = scanner.nextInt();
		int num;
		
		for(int i=0;i<cnt;i++) {
			num = scanner.nextInt();
			System.out.println(num + " " + num);
		}

	}

}
