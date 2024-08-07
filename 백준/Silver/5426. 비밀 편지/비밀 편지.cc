#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
	string word;
	int cnt,side,count;
	char array[100][100];
	cin >> cnt;

	for(int i=0;i<cnt;i++){
		cin >> word;

		side = sqrt(word.length());
		count = 0;


		for(int k=0;k<side;k++){
			for(int l=side-1;l>=0;l--){
				array[l][k] = word[count];
				count++;
			}
		}


		for(int i=0;i<side;i++){
			for(int j=0;j<side;j++){
				cout << array[i][j];
			}
		}

		cout << '\n';


	}

	return 0;
}