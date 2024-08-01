
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		int cnt = scanner.nextInt();
		int[] arr = new int[cnt];
		
		for(int i=0;i<cnt;i++) {
			arr[i] = scanner.nextInt();
		}
		
		int max = arr[0];
		int min = arr[0];
		for(int i=0;i<cnt;i++) {
			if(arr[i]>max) {
				max = arr[i];
			}
			if(arr[i]<min) {
				min = arr[i];
			}
		}
		
		System.out.println(min + " " + max);

	}

}
