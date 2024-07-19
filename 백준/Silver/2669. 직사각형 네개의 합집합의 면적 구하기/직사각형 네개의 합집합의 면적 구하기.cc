#include <iostream>
using namespace std;

int main(){
	int x1,y1,x2,y2;
	int result = 0;
	int array[101][101] = { 0, };

	for(int i=0;i<4;i++){
		cin >> x1 >> y1 >> x2 >> y2;
		for (int j=x1;j<x2;j++){
			for (int k=y1;k<y2;k++){
				array[j][k] = 1;
			}
		}
	}

	for (int j=0;j<101;j++){
		for (int k=0;k<101;k++){
			if(array[j][k] == 1){
				result++;
			}
			//cout << array[j][k];
		}
		//cout << '\n';
	}

	cout << result << endl;

	return 0;
}