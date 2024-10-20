#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
	stack<char> s;
	string value;
	int star_index;
	int cnt=0;

	cin >> value;

	for(int i=0;i<value.length();i++){
		if(value[i] == '*'){
			star_index = i;
		}
	}

	for(int i=0;i<value.length();i++){
		if(value[i]=='(' && i<star_index){
			s.push('(');
		} else if(value[i]==')' &&!s.empty() && i<star_index){
			s.pop();
		} else if(value[i]==')' && i>star_index && !s.empty()){
			s.pop();
			cnt++;
		}
	}

	cout << cnt << '\n';


	return 0;
}