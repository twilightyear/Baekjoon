import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		int N = scanner.nextInt();
		int a=0;
		int b=0;
		int c=0;
		
		for(int i=1;i<=N;i++) {
			a+=i;
			b+=i;
			c+=(i*i*i);
		}
		
		System.out.println(a);
		System.out.println(b*b);
		System.out.println(c);

	}

}
