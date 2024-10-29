#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
	int n;
	stack<string> s;
	string word;
	cin >> n;

	for(int i=0;i<n;i++){
		cin >> word;
		if(word=="A"){
			s.push(word);
		}
		if(word=="Un" && !s.empty()){
			s.pop();
		} else if(word=="Un" && s.empty()){
			cout << "NO\n";
			return 0;
		}
	}

	if(s.empty()){
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}

	return 0;
}