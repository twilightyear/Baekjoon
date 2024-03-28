#include <iostream>
#include <string>
using namespace std;

int main(){
	string word;
	cin >> word;

	if (word.length() != 3){
		exit(0);
	}
	
	cout << word[2] << word[1] << word[0] << endl;
	return 0;
}