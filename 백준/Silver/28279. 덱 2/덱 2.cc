#include <iostream>
#include <deque>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	deque<int> deque;
	int N,x,y;

	cin >> N;

	for(int i=0;i<N;i++){
		cin >> x;

		if(x==1){
			cin >> y;
			deque.push_front(y);
		} else if(x==2){
			cin >> y;
			deque.push_back(y);
		} else if(x==3){
			if(deque.empty()){
				cout << -1 << '\n';
			} else {
				cout << deque.front() << '\n';
				deque.pop_front();
			}
		} else if(x==4){
			if(deque.empty()){
				cout << -1 << '\n';
			} else {
				cout << deque.back() << '\n';
				deque.pop_back();
			}
		} else if(x==5){
			cout << deque.size() << '\n';
		} else if(x==6){
			if(deque.empty()){
				cout << 1 << '\n';
			} else {
				cout << 0 << '\n';
			}
		} else if(x==7){
			if(deque.empty()){
				cout << -1 << '\n';
			} else {
				cout << deque.front() << '\n';
			}
		} else if(x==8){
			if(deque.empty()){
				cout << -1 << '\n';
			} else {
				cout << deque.back() << '\n';
			}
		}
	}
}