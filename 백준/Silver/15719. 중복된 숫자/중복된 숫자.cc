#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N,val;
	vector<int> v;
	cin >> N;

	for(int i=0;i<N;i++){
		cin >> val;
		v.emplace_back(val);
	}

	sort(v.begin(),v.end());

	for(int i=1;i<=N;i++){
		if(v[i]==v[i-1]){
			cout << v[i] << '\n';
			break;
		}
	}


	return 0;
}