#include <iostream>
#include <string>
#include <sstream>
#include <stack>
using namespace std;

int main(){
	int n;
	string value;
	cin >> n;
	cin.ignore();

	for(int i=1;i<=n;i++){
		stack<string> s;
		getline(cin,value);

		stringstream ss(value);
		string word;

		while(ss >> word){
			s.push(word);
		}

		cout << "Case #" << i << ": ";
		while(!s.empty()){
			if(s.size()!=1){
				cout << s.top() << " ";
				s.pop();
			} else {
				cout << s.top() << "\n";
				s.pop();
			}
		}

	}
	return 0;
}