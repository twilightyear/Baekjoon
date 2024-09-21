#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	stack<int> stack;
	string command;
	int cnt,n;
	cin >> cnt;

	for(int i=0;i<cnt;i++){
		cin >> command;

		if(command=="push"){
			cin >> n;
			stack.push(n);
		} else if(command=="pop"){
			if(stack.empty()){
				cout << -1 << '\n';
			} else {
				cout << stack.top() << '\n';
				stack.pop();
			}
		} else if(command=="size"){
			cout << stack.size() << '\n';
		} else if(command=="empty"){
			if(stack.empty()){
				cout << 1 << '\n';
			} else {
				cout << 0 << '\n';
			}
		} else if(command=="top"){
			if(stack.empty()){
				cout << -1 << '\n';
			} else {
				cout << stack.top() << '\n';
			}
		}
	}

	return 0;
}