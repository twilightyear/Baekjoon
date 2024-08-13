import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		int array[][] = new int[10][10];
		
		int max=0;
		int x=0;
		int y=0;
		
		for(int i=0;i<9;i++) {
			for(int j=0;j<9;j++) {
				array[i][j] = scanner.nextInt();
				if((i==0 && j==0) || (array[i][j]>max)) {
					max = array[i][j];
					x = i+1;
					y = j+1;
				}
			}
		}
		
		System.out.print(max + "\n" + x + " " + y);
		

	}

}
