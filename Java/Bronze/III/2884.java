import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int h = scanner.nextInt();
		int m = scanner.nextInt();
		
		
		
		
		if(m<45) {
			if(h==0) {
				h=23;
				m=m+15;
				
			} else {
				h--;
				m=m+15;
			}
		} else {
			m-=45;
		}
		
		System.out.println(h + " " + m);
		
		

	}

}
