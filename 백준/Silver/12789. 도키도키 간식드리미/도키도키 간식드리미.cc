#include <iostream>
#include <stack>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	stack<int> stack;
	int x,num,cnt=1;

	cin >> num;

	while(num){

		cin >> x;

		if(x==cnt){
			cnt++;
		} else {
			stack.push(x);
		}

		while(!stack.empty()&&stack.top()==cnt){
			stack.pop();
			cnt++;
		}

		num-=1;
	}


	if(stack.empty()){
		cout << "Nice" << '\n';
	} else {
		cout << "Sad" << '\n';
	}
	return 0;
}