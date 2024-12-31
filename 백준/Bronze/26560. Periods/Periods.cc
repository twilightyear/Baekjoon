#include <iostream>
#include <string>
using namespace std;

string test(string word){
	string result;

	if(word[word.length()-1]=='.'){
		result = word;
	} else {
		result = word+'.';
	}

	return result;
}

int main(){
	string word;
	int cnt;
	cin >> cnt;
	cin.ignore();

	for(int i=0;i<cnt;i++){
		getline(cin, word);
		cout << test(word) << '\n';
	}
	return 0;
}