#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int val;
	int total=0;
	vector<int> v;
	for(int i=0;i<5;i++){
		cin >> val;
		total+=val;

		v.emplace_back(val);
	}

	sort(v.begin(),v.end());

	cout << total/5 << '\n' << v[2] << '\n';

	return 0;
}