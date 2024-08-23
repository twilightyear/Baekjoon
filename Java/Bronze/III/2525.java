import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		int h = scanner.nextInt();
		int m = scanner.nextInt();
		int time = scanner.nextInt();
		
		if (m+time>59){
			if (h+((m+time)/60)>23){
				h+=(((m+time)/60)-24);
				m = (m+time)-((m+time)/60)*60;
			} else {
				h+=((m+time)/60);
				m = (m+time)-((m+time)/60)*60;
			}
		} else {
			m+=time;
		}

		System.out.println(h + " " + m);

	}

}
