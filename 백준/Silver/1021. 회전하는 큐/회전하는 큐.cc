#include <iostream>
#include <deque>
using namespace std;

int result=0;

void cal1(deque<int> &dq){
	dq.pop_front();
}

void cal2(deque<int> &dq){
	int tmp = dq.front();
	dq.pop_front();
	dq.push_back(tmp);
	result++;
}

void cal3(deque<int> &dq){
	int tmp = dq.back();
	dq.pop_back();
	dq.push_front(tmp);
	result++;
}

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	deque<int> dq;
	int N,M,val;
	cin >> N >> M;

	for(int i=1;i<=N;i++){
		dq.push_back(i);
	}

	for(int i=0;i<M;i++){
		cin >> val;

		int index=0;
		for(int j=0;j<dq.size();j++){
			if(dq[j]==val){
				index=j;
				break;
			}
		}

		if(2*index<dq.size()){
			while(dq.front()!=val){
				cal2(dq);
			}
			cal1(dq);
		} else {
			while(dq.front()!=val){
				cal3(dq);
			}
			cal1(dq);
		}
	}

	cout << result << '\n';


	return 0;
}