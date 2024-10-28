#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;

int r;

void PUSH(stack<int>& s, int x){
	s.push(x);
}

void STORE(stack<int>& s){
	r = s.top();
	s.pop();
}

void LOAD(stack<int>& s){
	s.push(r);
}

void PLUS(stack<int>& s){
	int tmp = s.top();
	s.pop();
	int tmp2 = s.top();
	s.pop();
	s.push(tmp+tmp2);
}

void TIMES(stack<int>& s){
	int tmp = s.top();
	s.pop();
	int tmp2 = s.top();
	s.pop();
	s.push(tmp*tmp2);
}

int IFZERO(stack<int>& s,int x,int i){
	if(s.top()==0){
		s.pop();
		return x-1;
	} else {
		s.pop();
		return i;
	}
}

void DONE(stack<int>& s){
	cout << s.top() << '\n';
}

int main(){
	vector<string> v;
	int val;
	int cnt;
	stack<int> s;
	string command;
	string line;
	cin >> cnt;

	cin.ignore();

	for(int i=0;i<cnt;i++){
		getline(cin, line);
		v.push_back(line);
	}

	for(int i=0;i<cnt;i++){
		command = v[i];
		if(command.substr(0,4)=="PUSH"){
			if(command.length()>5){
				val = stoi(command.substr(5));
				PUSH(s,val);
			}
		} else if(command=="STORE") {
			STORE(s);
		} else if(command=="LOAD") {
			LOAD(s);
		} else if(command=="PLUS") {
			PLUS(s);
		} else if(command=="TIMES") {
			TIMES(s);
		} else if(command.substr(0,6)=="IFZERO") {
			if(command.length()>7){
				val = stoi(command.substr(7));
				i = IFZERO(s,val,i);
			}
		} else if(command=="DONE") {
			DONE(s);
			break;
		}

	}

	return 0;
}