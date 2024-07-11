import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		int H,I,A,R,C;
		Scanner scanner = new Scanner(System.in);
		H = scanner.nextInt();
		I = scanner.nextInt();
		A = scanner.nextInt();
		R = scanner.nextInt();
		C = scanner.nextInt();
		System.out.println(H*I-A*R*C);
	}
}
