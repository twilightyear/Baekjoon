import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int hh = scanner.nextInt();
		int mm = scanner.nextInt();
		
		System.out.println((hh-9)*60+mm);

	}

}
