import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int result=0;
		int num = scanner.nextInt();
		String input;
		
		scanner.nextLine();
		
		input = scanner.nextLine();
		
		for(int i=0;i<num;i++) {
			result+=((int)input.charAt(i)-48);
		}
		
		System.out.println(result);

	}

}
