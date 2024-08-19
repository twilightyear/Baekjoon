#include <iostream>
using namespace std;

int main(){
	int cnt;

	cin >> cnt;

	int array[cnt][5];

	for(int i=0;i<cnt;i++){
		for(int j=0;j<5;j++){
			cin >> array[i][j];
		}
	}

	for(int i=0;i<cnt;i++){
		int max = 1;
		for(int j=0;j<5;j++){
			if(array[i][j]>max){
				max = array[i][j];
			}
		}
		cout << "Case #" << i+1 << ": " << max << '\n';
	}


	return 0;
}