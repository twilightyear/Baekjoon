import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int a = scanner.nextInt();
		int b = scanner.nextInt();
		int c = scanner.nextInt();
		
		if ((b<=a && a<=c) || (c<=a && a<=b)){
			System.out.println(a);
		} else if ((a<=b && b<=c) || (c<=b && b<=a)){
			System.out.println(b);
		} else if ((b<=c && c<=a) || (a<=c && c<=b)){
			System.out.println(c);
		}
		

	}

}
