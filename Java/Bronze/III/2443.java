import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		
		int n = scanner.nextInt();
		n--;
		for (int k=n;k>=0;k--){
			for (int i=n-k;i>0;i--){
				System.out.print(" ");
			}
			for (int j=0;j<2*k+1;j++){
				System.out.print("*");	
			}
			System.out.print("\n");
		}
		// TODO Auto-generated method stub

	}

}
