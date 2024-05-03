#include <iostream>
#include <string>
using namespace std;

int main(){
	string word;
	cin >> word;

	for (int i=0;i<word.length();i++){
		cout << char((char(word[i])-32))
		;
	}
	cout << endl;
	return 0;
}