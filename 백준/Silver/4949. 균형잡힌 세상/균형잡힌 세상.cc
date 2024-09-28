#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
	while(1){
		stack<char> stack;
		string input;
		char data;
		int v=0;

		getline(cin,input);

		if(input=="."){
			break;
		}

		for(int i=0;i<input.length();i++){
			data = input[i];

			if(data=='(' || data=='['){
				stack.push(data);
			} else if(data==')' || data==']'){
				if((!stack.empty() && stack.top()=='(' && data==')') || (!stack.empty() && stack.top()=='[' && data==']')){
					stack.pop();
				} else {
					v=1;
					break;
				}
			}
		

		}

		if(v==0 && stack.empty()){
			cout << "yes" << '\n';
		} else {
			cout << "no" << '\n';
		}

	}
	return 0;
}


