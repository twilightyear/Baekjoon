import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		int a,result=0;
		Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt();
		int x = scanner.nextInt();
		int[] array = new int[n];
		
		for(int i=0;i<n;i++) {
			a = scanner.nextInt();
			array[i] = a;
		}
		
		for(int i=0;i<n;i++) {
			if(array[i]<x) {
				System.out.print(array[i]);
				if(i!=n-1) {
					System.out.print(' ');
				}
			}
			
		}
		
		
		
		

	}

}
