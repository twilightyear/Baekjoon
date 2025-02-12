#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int N,M,val;
	vector<int> arr;
	cin >> N >> M;

	for(int i=0;i<N+M;i++){
		cin >> val;

		arr.push_back(val);
	}

	sort(arr.begin(),arr.end());

	for(int i=0;i<N+M;i++){
		if(i==N+M-1){
			cout << arr[i] << '\n';
		} else {
			cout << arr[i] << ' ';
		}
	}

	return 0;
}