#include <iostream>
#include <string>
using namespace std;

int change(int letter){
	if (97<=letter && letter <=122){
		return letter - 32;
	} else if (65<=letter and letter <= 90){
		return letter + 32;
	}
}


int main(){
	string word;	
	cin >> word;

	for (int i=0;i<word.length();i++){
		word[i] = char(change(word[i]));

	}

	for (int i=0;i<word.length();i++){
		cout << word[i];
	}
	cout << endl;

	return 0;
}