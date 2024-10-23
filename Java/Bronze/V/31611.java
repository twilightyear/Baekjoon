import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int x = scanner.nextInt();
		while(x>2){
			x-=7;
		}

		if (x==2){
			System.out.println(1);
		} else {
			System.out.println(0);
		}

	}

}
