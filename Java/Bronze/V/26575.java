import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int cnt = scanner.nextInt();
		double a,b,c;
		
		for(int i=0;i<cnt;i++) {
			a = scanner.nextDouble();
			b = scanner.nextDouble();
			c = scanner.nextDouble();
			System.out.printf("$%.2f\n",a*b*c);
		}
		

	}

}
