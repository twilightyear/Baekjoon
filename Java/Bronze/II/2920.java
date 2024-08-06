import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		int a,b,c,d,e,f,g,h;
		a = scanner.nextInt();
		b = scanner.nextInt();
		c = scanner.nextInt();
		d = scanner.nextInt();
		e = scanner.nextInt();
		f = scanner.nextInt();
		g = scanner.nextInt();
		h = scanner.nextInt();		
		
		if(a<b && b<c && c<d && d<e && e<f && f<g && g<h) {
			System.out.println("ascending");
		} else if(a>b && b>c && c>d && d>e && e>f && f>g && g>h) {
			System.out.println("descending");
		} else {
			System.out.println("mixed");
		}
		
	}

}
