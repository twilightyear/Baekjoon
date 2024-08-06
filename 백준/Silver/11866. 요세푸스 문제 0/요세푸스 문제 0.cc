#include <iostream>
#include <queue>
using namespace std;

int main(){
	int n,k,tmp;
	queue<int> que;
	cin >> n >> k;

	for(int i=0;i<n;i++){
		que.push(i+1);
	}
	
	cout << "<";

	while(!que.empty()){

		for(int j=0;j<k-1;j++){
			tmp = que.front();
			que.pop();
			que.push(tmp);
		}

		cout << que.front();

		if(que.size()!=1){
			cout << ", ";
		}

		que.pop();
	}

	cout << ">\n";


	return 0;
}