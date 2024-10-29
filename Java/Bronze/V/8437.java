import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int total  = scanner.nextInt();
		int more = scanner.nextInt();
		
		System.out.println((int)((0.5)*total+1));
		System.out.println((int)((0.5)*total+1-more));

	}

}
