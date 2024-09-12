#include <iostream>
#include <stack>
using namespace std;

int main(){
	stack<int> stack;
	int N,a,b;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;

	for(int i=0;i<N;i++){
		cin >> a;

		if(a==1){
			cin >> b;

			stack.push(b);
		} else if(a==2){
			if(stack.empty()){
				cout << -1 << '\n';
			} else {
				cout << stack.top() << '\n';
				stack.pop();
			}
		} else if(a==3){
			cout << stack.size() << '\n';
		} else if(a==4){
			if(stack.empty()){
				cout << 1 << '\n';
			} else {
				cout << 0 << '\n';
			}
		} else if(a==5){
			if(stack.empty()){
				cout << -1 << '\n';
			} else {
				cout << stack.top() << '\n';
			}		
		}
	}

	return 0;
}