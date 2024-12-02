#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;
	string word;

	getline(cin,s);
	getline(cin,word);

	int result=0;

	while(s.find(word)!=string::npos){
		s = s.substr(s.find(word)+word.length());
		result++;
	}

	cout << result << '\n';

	return 0;
}