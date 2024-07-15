#include <iostream>
#include <string>
using namespace std;

int main(){
	string word;
	int count=0;
	cin >> word;

	for (int i = 0; i < word.length(); i++){
		if(word[i] == 'a' or word[i] == 'e' or word[i] == 'i' or word[i] == 'o' or word[i] == 'u'){
			count++;
		}
	}

	cout << count << '\n';

	return 0;
}