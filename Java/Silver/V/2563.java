import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		int[][] paper = new int[101][101];
		Scanner scanner = new Scanner(System.in);
		
		int cnt,x,y,result=0;
		
		cnt = scanner.nextInt();
		
		for(int i=0;i<101;i++) {
			for(int j=0;j<101;j++) {
				paper[i][j] = 0;
			}
		}
		
		
		
		
		for(int i=0;i<cnt;i++) {
			x = scanner.nextInt();		
			y = scanner.nextInt();		
			
			
			for(int j=x;j<x+10;j++) {
				for(int k=y;k<y+10;k++) {
					paper[j][k] = 1;
				}
			}
		}
		
		
		
		for(int i=0;i<101;i++) {
			for(int j=0;j<101;j++) {
				if(paper[i][j]==1) {
					result++;
				}
			}
		}
		
		System.out.println(result);

	}

}
