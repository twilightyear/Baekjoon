import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		String word = scanner.nextLine();
		
		if(word.equals("M")) {
			System.out.println("MatKor");
		} else if(word.equals("W")) {
			System.out.println("WiCys");
		} else if(word.equals("C")) {
			System.out.println("CyKor");
		} else if(word.equals("A")) {
			System.out.println("AlKor");
		} else if(word.equals("$")) {
			System.out.println("$clear");
		}

	}

}
