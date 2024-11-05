import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int N = scanner.nextInt();
		
		String word;
		word = scanner.nextLine();
		
		for(int i=0;i<N;i++) {
			word = scanner.nextLine();
			if(word.equals("Algorithm")) {
				System.out.println(204);
			} else if(word.equals("DataAnalysis")) {
				System.out.println(207);
			} else if(word.equals("ArtificialIntelligence")) {
				System.out.println(302);
			} else if(word.equals("CyberSecurity")) {
				System.out.println("B101");
			} else if(word.equals("Network")) {
				System.out.println(303);
			} else if(word.equals("Startup")) {
				System.out.println(501);
			} else if(word.equals("TestStrategy")) {
				System.out.println(105);
			}
		}
	}

}
