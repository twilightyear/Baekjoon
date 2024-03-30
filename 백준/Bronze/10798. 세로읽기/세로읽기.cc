#include <iostream>
#include <string>
using namespace std;

int main(){
	string word;
	char array[5][15];

	for (int i=0;i<5;i++){
		cin >> word;
		for (int k=0;k<15;k++){
			if (k < word.length()){
				array[i][k] = word[k];
			} else {
				array[i][k] = '*';
			}
		}
	}

	for (int i=0;i<15;i++){
		for (int j=0;j<5;j++){
			if (array[j][i] != '*'){
				cout << array[j][i];
			}
		}
	}
	cout << endl;

	return 0;
}