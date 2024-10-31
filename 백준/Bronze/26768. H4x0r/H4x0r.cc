#include <iostream>
#include <string>
using namespace std;

int main(){
	string word;
	cin >> word;

	for(int i=0;i<word.length();i++){
		if(word[i]=='a'){
			word[i] = '4';
		} else if(word[i]=='e'){
			word[i] = '3';
		} else if(word[i]=='i'){
			word[i] = '1';
		} else if(word[i]=='o'){
			word[i] = '0';
		} else if(word[i]=='s'){
			word[i] = '5';
		}
	}

	cout << word << '\n';
	return 0;
}