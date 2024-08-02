import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		int i,j,k;
		Scanner scanner = new Scanner(System.in);
		int N = scanner.nextInt();
		int M = scanner.nextInt();
		
		int[] array = new int[N];
		
		for(int a=0;a<N;a++) {
			array[a] = 0;
		}
		
		for(int a=0;a<M;a++) {
			i = scanner.nextInt();
			j = scanner.nextInt();
			k = scanner.nextInt();
			
			for(int b=i-1;b<j;b++) {
				array[b]=k;
			}
		}
		
		for(int a=0;a<N;a++) {
			if(a!=N+1) {
				System.out.print(array[a] + " ");
			} else {
				System.out.print(array[a]);
			}
		}
	}
}
