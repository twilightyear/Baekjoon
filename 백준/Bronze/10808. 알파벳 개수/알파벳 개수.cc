#include <iostream>
#include <string>
using namespace std;

int main(){
	int array[26] = {};
	string word;
	cin >> word;

	for (int i=0;i<word.length();i++){
		array[(int)word[i]-97]++;
	}

	for (int i=0;i<26;i++){
		if(i!=25){
			cout << array[i] << ' ';
		} else {
			cout << array[i] << '\n';
		}
	}
	
	return 0;
}
