import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		String value = scanner.nextLine();
		
		if (value.equals("N") ||  value.equals("n")){
			System.out.println("Naver D2");
		} else {
			System.out.println("Naver Whale");
		}

	}

}
