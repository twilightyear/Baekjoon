#include <set>
#include <iostream>
using namespace std;

int main(){
	int n,v;
	set<int> s;

	cin >> n;

	for(int i=0;i<n;i++){
		cin >> v;
		s.insert(v);
	}

	for(int num : s){
		cout << num << " ";
	}

	return 0;
}