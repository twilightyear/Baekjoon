import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		int N = scanner.nextInt();
		int M = scanner.nextInt();
		int array[][] = new int[N][M];
		
		for(int i=0;i<N;i++) {
			for(int j=0;j<M;j++) {
				array[i][j] = scanner.nextInt();
			}
		}
		
		for(int i=0;i<N;i++) {
			for(int j=0;j<M;j++) {
				array[i][j] += scanner.nextInt();
			}
		}
		
		for(int i=0;i<N;i++) {
			for(int j=0;j<M;j++) {
				if(j!=M-1) {
					System.out.print(array[i][j]+" ");
				} else {
					System.out.print(array[i][j]);
				}
			}
			System.out.println();
		}
		

	}

}
