#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool rule(pair<int,string> a,pair<int,string> b){
	return a.first<b.first;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int cnt,age;
	string name;
	vector<pair<int, string> > array;

	cin >> cnt;

	for (int i=0;i<cnt;i++){
		cin >> age >> name;
		array.push_back({age, name});
	}

	stable_sort(array.begin(), array.end(),rule);

	for (int j=0;j<cnt;j++){
		cout << array[j].first << ' ' << array[j].second << '\n';
	}

	return 0;
}