#include <iostream>
#include <string>
using namespace std;

int check(string word){
	int result=0;
	int before=0;
	int how_many=0;

	for (int i=0;i<word.length();i++){

		//요소가 첫 o일 경우
		if (word[i] == 'O' and before == 0){
			result++;
			before=1;
			how_many=1;

		//아닐 경우
		} else if (word[i] == 'O' and before == 1){
			how_many+=1;
			result+=how_many;
		} else {
			before=0;
			how_many=0;
		}
	}
	return result;
}

int main(){
	string word;
	int cases;

	cin >> cases;

	for (int i=0;i<cases;i++){
		cin >> word;
		cout << check(word) << endl;
	}
	return 0;
}