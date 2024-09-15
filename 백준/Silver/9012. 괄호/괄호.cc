#include <iostream>
#include <stack>
#include <string>
using namespace std;

string ex(){
	stack<char> stack;
	string word;

	cin >> word;

	for(int i=0;i<word.length();i++){
		if(word[i]=='('){
			stack.push('(');
		} else {
			if(stack.empty()){
				return "NO";
			}
			stack.pop();
		}
	}
	if(stack.empty()){
		return "YES";
	} else {
		return "NO";
	}


}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	for(int i=0;i<n;i++){
		cout << ex() << '\n';
	}




	return 0;
}