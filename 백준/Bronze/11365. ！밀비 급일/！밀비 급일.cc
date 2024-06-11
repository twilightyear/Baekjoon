#include <iostream>
#include <string>
#include <list>
#include <algorithm>
using namespace std;

int main(){
	string word;
	list<string> result;
	int running=1;

	while(running){
		getline(cin, word);
		if (word != "END"){
			reverse(word.begin(),word.end());
			result.push_back(word);
		} else {
			running=0;
			break;
		}
	}

	for (string i : result){
		cout << i << endl;
	}
	return 0;
}
