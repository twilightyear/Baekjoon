import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int N = scanner.nextInt();
		int result=0;
		String word = scanner.nextLine();
		word = scanner.nextLine();
		
		for(int i=0;i<N;i++) {
			if(word.charAt(i)=='a') {
				result++;
			} else if(word.charAt(i)=='e') {
				result++;
			} else if(word.charAt(i)=='i') {
				result++;
			} else if(word.charAt(i)=='o') {
				result++;
			} else if(word.charAt(i)=='u') {
				result++;
			}
		}
		
		System.out.println(result);
		
		
		

	}

}
