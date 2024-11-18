#include <iostream>
using namespace std;

int main(){
	int n;
	string word;
	cin >> n;

	cin >> word;

	for(int i=0;i<word.length();i++){
		if(word[i]=='l'){
			word[i] = 'L';
		} else if(word[i]=='I'){
			word[i] = 'i';
		}
	}

	cout << word << '\n';
	return 0;
}