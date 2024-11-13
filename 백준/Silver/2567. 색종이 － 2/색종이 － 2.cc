#include <iostream>
using namespace std;

int main(){
	int x,y;
	int cnt;
	int array[102][102] = {0,};
	int result=0;

	cin >> cnt;

	for(int i=0;i<cnt;i++){
		cin >> y >> x;

		for(int j=x;j<x+10;j++){
			for(int k=y;k<y+10;k++){
				array[j][k] = 1;
			}
		}
	}



	for(int i=0;i<102;i++){
		for(int j=0;j<102;j++){
			if(array[i][j]==1){
				if(i==0 || array[i-1][j]==0){
					result++;
				}
				if(i==101 || array[i+1][j]==0){
					result++;
				}
				if(j==0 || array[i][j-1]==0){
					result++;
				}
				if(j==101 || array[i][j+1]==0){
					result++;
				}
			}
		}
		
	}

	cout << result << '\n';


	return 0;
}