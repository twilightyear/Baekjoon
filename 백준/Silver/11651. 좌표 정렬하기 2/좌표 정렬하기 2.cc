#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n,x,y;
	vector<pair<int,int>> array;
	cin >> n;

	for(int i=0;i<n;i++){
		cin >> x >> y;
		array.push_back({y,x});
	}

	sort(array.begin(),array.end());

	for (int j=0;j<n;j++){
		cout << array[j].second << ' ' << array[j].first << '\n';
	}

	return 0;
}