import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		char array[][] = new char[5][15];
		Scanner scanner = new Scanner(System.in);
		int max=0;
		
		String word;
		for(int i=0;i<5;i++) {
			word = scanner.next();
			if(word.length()>max) {
				max = word.length();
			}
			for(int j=0;j<word.length();j++) {
				array[i][j] = word.charAt(j);
			}
		}
		
		for(int i=0;i<max;i++) {
			for(int j=0;j<5;j++) {
				if(array[j][i] != '\0') {
					System.out.print(array[j][i]);
				}
			}
		}
	}
}
