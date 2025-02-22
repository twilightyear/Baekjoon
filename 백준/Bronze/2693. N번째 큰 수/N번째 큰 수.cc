#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int cnt;
	cin >> cnt;

	for(int k=0;k<cnt;k++){
		vector<int> v;
		int val;

		for(int i=0;i<10;i++){
			cin >> val;
			v.emplace_back(val);
		}

		sort(v.begin(),v.end(), greater<int>());

		cout << v[2] << '\n';
	}


	return 0;
}