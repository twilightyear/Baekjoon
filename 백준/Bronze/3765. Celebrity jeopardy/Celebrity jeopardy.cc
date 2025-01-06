#include <iostream>
using namespace std;

int main(){
	string word;
	while(1){
		getline(cin,word);
		if(cin.eof()){
			break;
		} else {
			cout << word << '\n';
		}
	}
	return 0;
}