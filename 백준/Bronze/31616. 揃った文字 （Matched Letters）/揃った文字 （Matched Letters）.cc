#include <iostream>
#include <string>
using namespace std;

int main(){
	int n;
	bool result = true;
	string word;
	cin >> n >> word;

	char init = word[0];

	for(int i=1;i<word.length();i++){
		if(word[i]!=word[0]){
			result = false;
		}
	}

	if(result){
		cout << "Yes\n";
	} else {
		cout << "No\n";
	}


	return 0;
}