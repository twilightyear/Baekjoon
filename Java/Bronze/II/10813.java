import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		int n = scanner.nextInt();
		int m = scanner.nextInt();
		
		int i,j,tmp;
		
		int[] array = new int[n];
		
		for(int q=0;q<n;q++) {
			array[q]=q+1;
		}
		
		
		for(int w=0;w<m;w++) {
			i = scanner.nextInt();
			j = scanner.nextInt();
			tmp = array[i-1];
			array[i-1]=array[j-1];
			array[j-1]=tmp;
		}
		
		for(int e=0;e<n;e++) {
			if(e!=n-1) {
				System.out.print(array[e] + " ");
			} else {
				System.out.print(array[e]);
			}
		}
		

	}

}
