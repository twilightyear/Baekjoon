#include <iostream>
#include <string>
using namespace std;

int main(){
	int length;
	string word;

	cin >> length >> word;

	length = word.length();

	for (int i=5;i>0;i--){
		cout << word[length-i];
	}
	cout << '\n';
	return 0;
}