import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		String word = scanner.nextLine();
		String doc = scanner.nextLine();
		
		int patient_cnt = word.length()-1;
		int doc_cnt = doc.length()-1;

		if(patient_cnt>=doc_cnt) {
			System.out.println("go");
		} else {
			System.out.println("no");
		}
	}

}
