import java.util.Scanner;

public class Main{

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int N = scanner.nextInt();
		
		for(int i=0;i<N;i++) {
			if(i!=N-1) {
				System.out.print("LoveisKoreaUniversity ");
			} else {
				System.out.print("LoveisKoreaUniversity");
			}
		}

	}

}
