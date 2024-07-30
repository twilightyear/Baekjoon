import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int N = scanner.nextInt();
		int[] array = new int[N];
		int A;
		for(int i=0;i<N;i++) {
			A = scanner.nextInt();
			array[i] = A;
		}
		
		int M = scanner.nextInt();	
		int result=0;
		
		for(int i=0;i<N;i++) {
			if(M==array[i]) {
				result++;
				
			}
		}	
		
		System.out.println(result);
		

	}

}
