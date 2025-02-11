#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int N,K,val;
	vector<int> v;
	cin >> N >> K;

	for(int i=0;i<N;i++){
		cin >> val;

		v.push_back(val);
	}

	sort(v.begin(),v.end());

	cout << v[K-1] << '\n';
	return 0;
}