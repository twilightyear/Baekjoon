#include <iostream>
#include <queue>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	queue<int> queue;
	int N;
	cin >> N;

	for(int i=1;i<=N;i++){
		queue.push(i);
	}

	while(queue.size()>1){
		queue.pop();
		queue.push(queue.front());
		queue.pop();
	}

	cout << queue.front() << '\n';

	return 0;
}