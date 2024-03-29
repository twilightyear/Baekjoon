#include <iostream>
using namespace std;

int main(){
	int array[101][101];
	int count,x,y;
	int area=0;

	cin >> count;

	for (int j=0;j<=100;j++){
		for (int k=0;k<=100;k++){
			array[j][k] = 0;
		}
	}

	for (int i=0;i<count;i++){
		cin >> x >> y;

		for (int j=x;j<x+10;j++){
			for (int k=y;k<y+10;k++){
				array[j+1][k+1] = 1;
			}
		}
	}

	for (int j=0;j<=100;j++){
		for (int k=0;k<=100;k++){
			if (array[j][k] == 1){
				area++;
			}
		}
	}

	cout << area << endl;

	return 0;
}