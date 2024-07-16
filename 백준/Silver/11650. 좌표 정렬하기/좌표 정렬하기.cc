#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int count,x,y;
	vector<pair<int,int>> array;

	cin >> count;

	for (int i=0;i<count;i++){
		cin >> x >> y;
		array.push_back({x,y});
	}

	sort(array.begin(),array.end());

	for (int j=0;j<count;j++){
		cout << array[j].first << ' ' << array[j].second << '\n';
	}

	return 0;
}