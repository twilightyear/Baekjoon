#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> v;
	int val,N,k;
	cin >> N >> k;

	for(int i=0;i<N;i++){
		cin >> val;
		v.emplace_back(val);
	}

	sort(v.begin(),v.end());

	cout << v[N-k] << '\n';

	return 0;
}