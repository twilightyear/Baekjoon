#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> A;
	int N,val;

	cin >> N;

	for(int i=0;i<N;i++){
		cin >> val;
		A.emplace_back(val);
	}

	sort(A.begin(),A.end());

	cin >> N;

	for(int i=0;i<N;i++){
		cin >> val;
		if(binary_search(A.begin(),A.end(),val)){
			cout << 1 << '\n';
		} else {
			cout << 0 << '\n';
		}
	}

	return 0;
}