import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		String word = scanner.nextLine();
		int index = 0;
		boolean found = false;
		
		
		for(int j=97;j<123;j++) {
			for(int i=0;i<word.length();i++) {
				if((int)word.charAt(i)==j) {
					//System.out.println(i);
					index = i;
					found = true;
					break;
				}else {
					found = false;
				}
			}
			if(found) {
				System.out.println(index);
			} else {
				System.out.println(-1);
			}
		
		}
	}
}
