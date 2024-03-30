#include <iostream>
#include <string>
using namespace std;

int main(){

	int n;
	string word;
	string criminal;
	cin >> n;

	for (int i=0;i<n;i++){
		cin >> word;
		for (int j=0;j<word.length();j++){
			if (word[j] == 'S'){
				criminal = word;
			}
		}
	}

	cout << criminal << endl;

	return 0;
}