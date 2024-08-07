import java.util.Scanner;
import java.util.HashSet;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		HashSet<Integer> set = new HashSet<Integer>();
		int a;
		
		for(int i=0;i<10;i++) {
			a = scanner.nextInt()%42;
			set.add(a);
		}
		
		System.out.println(set.size());

	}

}
