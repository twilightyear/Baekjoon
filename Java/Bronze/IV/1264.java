import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int result;
		
		while(true) {
			result=0;
			String line = scanner.nextLine();
			if(line.equals("#")) {
				break;
			} else {
				for(int i=0;i<line.length();i++) {
					if(line.charAt(i) == 'a' || line.charAt(i) == 'A'){
						result++;
					} else if(line.charAt(i) == 'e' || line.charAt(i) == 'E'){
						result++;
					} else if(line.charAt(i) == 'i' || line.charAt(i) == 'I'){
						result++;
					} else if(line.charAt(i) == 'o' || line.charAt(i) == 'O'){
						result++;
					} else if(line.charAt(i) == 'u' || line.charAt(i) == 'U'){
						result++;
					}
				}
			}
			
			System.out.println(result);
		}
	}
}
