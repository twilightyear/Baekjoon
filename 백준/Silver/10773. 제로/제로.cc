#include <iostream>
#include <stack>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	stack<int> stack;
	int K,val;
	long long int result=0;

	cin >> K;

	for(int i=0;i<K;i++){
		cin >> val;

		if(val==0){
			stack.pop();
		} else {
			stack.push(val);
		}
	}


	while(!stack.empty()){
		result+=stack.top();
		stack.pop();
	}


	cout << result << '\n';

	return 0;
}