import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		int n = scanner.nextInt();
		
		String word = scanner.nextLine();
		
		for(int i=0;i<n;i++) {
			word = scanner.nextLine();
			
			if(word.length()>=6 && word.length()<=9) {
				System.out.println("yes");
			} else {
				System.out.println("no");
			}
			
		}
		
	}

}
