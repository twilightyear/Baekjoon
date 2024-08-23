import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		int a,b,c,price = 0;
		
		a = scanner.nextInt();
		b = scanner.nextInt();
		c = scanner.nextInt();
		
		if (a == b && b == c){
			price = 10000 + a*1000;
		} else if ( a == b || a == c){
			price = 1000 + a*100;
		} else if ( b == c){
			price = 1000 + b*100;
		} else {
			if (a>b && a>c){
				price = a*100;
			} else if(b>a && b>c){
				price = b*100;
			} else if(c>a && c>b){
				price = c*100;
			}
		}
		
		System.out.println(price);
		
		
		
		
	}

}
