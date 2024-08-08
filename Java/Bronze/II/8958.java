import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int cnt = scanner.nextInt();
		
		//개행문자 문제 해결
		scanner.nextLine();
		
		String word;
		int result;
		
		for(int i=0;i<cnt;i++) {
			word = scanner.nextLine();
			
			
			result=0;
			int bonus=1;
			
			
			for(int j=0;j<word.length();j++) {
				if(word.charAt(j)=='O') {
					if(j!=0) {
						if(word.charAt(j-1)=='O') {
							bonus++;
						} else {
							bonus=1;
						}
					}
					result+=bonus;
				}
			}
			
			System.out.println(result);
			
			
		}

	}

}
