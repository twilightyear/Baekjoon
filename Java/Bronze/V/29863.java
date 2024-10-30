import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int a = scanner.nextInt();
		int b = scanner.nextInt();
		int result;
		
		if(a>=20) {
			result = (24-a)+b;
		} else {
			result = b-a;
		}
		
		System.out.println(result);

	}

}
