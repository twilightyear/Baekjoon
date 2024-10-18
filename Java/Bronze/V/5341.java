import java.util.Scanner;

public class Main {
	
	public static int calculate(int num) {
		int result=0;
		for(int i=num;i>0;i--) {
			result+=i;
		}
		return result;
	}

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int a;
		
		while(1) {
			a = scanner.nextInt();
			if(a!=0) {
				System.out.println(calculate(a));
			} else {
				break;
			}
			
		}

	}

}
