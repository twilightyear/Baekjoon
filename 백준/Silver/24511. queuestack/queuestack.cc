#include <iostream>
#include <deque>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N,x,M;
	deque<int> D;

	int type[100001];

	cin >> N;


	for(int i=0;i<N;i++){
		cin >> x;
		type[i] = x;
	}

	for(int i=0;i<N;i++){
		cin >> x;
		if(type[i]==0){
			D.push_back(x);
		}
	}

	cin >> M;

	for(int i=0;i<M;i++){
		cin >> x;
		D.push_front(x);
		cout << D.back() << '\n';
		D.pop_back();
	}



	return 0;
}