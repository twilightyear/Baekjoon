#include <iostream>
#include <string>
using namespace std;

int main(){
	string word;
	int n;

	cin >> n;

	for(int i=0;i<n;i++){
		cin >> word;
		for(int j=0;j<word.length();j++){
			if(j!=word.length()-1){
				if(word[j]!=word[j+1]){
					cout << word[j];
				}
			} else {
				cout << word[j];
			}
		}
		cout << '\n';
	}

	return 0;
}