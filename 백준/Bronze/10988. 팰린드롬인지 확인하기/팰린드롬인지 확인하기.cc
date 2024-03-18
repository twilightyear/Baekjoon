#include <iostream>
#include <string>
using namespace std;

int main(){
	string word;
	int result = 1;

	cin >> word;

	for (int i=0;i<(word.length()/2)+1;i++){
		if (word[i] != word[word.length()-i-1]){
			result = 0;
		}

	}

	cout << result << endl;

	return 0;
}