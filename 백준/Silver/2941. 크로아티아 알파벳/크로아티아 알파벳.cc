#include <iostream>
#include <string>
using namespace std;

int check(string word){
	int count = 0;
	string new_value;

	if (word.length()>=3){
		for (int i=0;i<word.length()-2;i++){
			if (word.substr(i,3) == "dz="){
				word[i] = ' ';
				word[i+1] = ' ';
				word[i+2] = ' ';
				count++;
			}
		}
	}

	if (word.length()>=2){
		for (int i=0;i<word.length()-1;i++){
			if (word.substr(i,2) == "c="){
				word[i] = ' ';
				word[i+1] = ' ';
				count++;
			} else if (word.substr(i,2) == "c-"){
				word[i] = ' ';
				word[i+1] = ' ';
				count++;
			} else if (word.substr(i,2) == "d-"){
				word[i] = ' ';
				word[i+1] = ' ';
				count++;
			} else if (word.substr(i,2) == "lj"){
				word[i] = ' ';
				word[i+1] = ' ';
				count++;
			} else if (word.substr(i,2) == "nj"){
				word[i] = ' ';
				word[i+1] = ' ';
				count++;
			} else if (word.substr(i,2) == "s="){
				word[i] = ' ';
				word[i+1] = ' ';
				count++;
			} else if (word.substr(i,2) == "z="){
				word[i] = ' ';
				word[i+1] = ' ';
				count++;
			}
		}	
	}

	for (int i=0;i<word.length();i++){
		if (word[i] != ' '){
			count++;
		}
	}
	return count;
}

int main(){
	string word;
	cin >> word;
	cout << check(word) << endl;

	return 0;
}