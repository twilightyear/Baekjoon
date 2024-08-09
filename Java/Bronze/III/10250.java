import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int H,W,N,room_num,floor_num;
		String val;
		int cnt = scanner.nextInt();
		
		for(int i=0;i<cnt;i++) {
			H = scanner.nextInt();
			W = scanner.nextInt();
			N = scanner.nextInt();
			
			
			if(N%H!=0) {
				room_num = (N/H)+1;
				floor_num = N%H;
			} else {
				room_num = (N/H);
				floor_num = H;
			}
			
			val = floor_num+"";
			if(room_num<10) {
				val+="0";
			}
			
			val+=room_num;
			
			
			System.out.println(val);
		}

	}

}
