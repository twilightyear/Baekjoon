#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	vector<int> array;
	int n,val;
	cin >> n;

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for(int i=0;i<n;i++){
		cin >> val;
		array.push_back(val);
	}

	sort(array.begin(),array.end());

	for(int i=0;i<n;i++){
		cout << array[i] << '\n';
	}


	return 0;
}