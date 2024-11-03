import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		int a = scanner.nextInt();
		int b = scanner.nextInt();
		
		if(b==0 && 12 <= a && a <= 16){
			System.out.println(320);
		} else {
			System.out.println(280);
		}

	}

}
