import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		int a,w,v;
		
		Scanner scanner = new Scanner(System.in);

		a = scanner.nextInt();
		w = scanner.nextInt();
		v = scanner.nextInt();
		

		if(a<=w/v){
			System.out.println(1);
		} else {
			System.out.println(0);
		}

	}

}
