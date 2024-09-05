import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		int n,a,b;

		Scanner scanner = new Scanner(System.in);
		
		n = scanner.nextInt();
		a = scanner.nextInt();
		b = scanner.nextInt();
		

		if (n>b){
			System.out.println("Bus");
		} else {
			if (b == a){
				System.out.println("Anything");
			} else if (b>a){
				System.out.println("Bus");
			} else {
				System.out.println("Subway");			
			}
		}

	}

}
