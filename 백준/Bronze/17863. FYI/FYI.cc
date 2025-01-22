#include <iostream>
#include <string>
using namespace std;

int main(){
	string word;
	cin >> word;

	if(word[0]=='5' && word[1]=='5' && word[2]=='5'){
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}
	return 0;
}